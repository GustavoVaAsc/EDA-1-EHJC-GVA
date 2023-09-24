enum boolean readDatabase(struct node **head, int *size){
    FILE *dataBase = fopen("db.txt","r");
    if(dataBase == NULL){
        printf("Error opening file");
        exit(-1);
    }
    char line[256];
    while(fgets(line, sizeof(line), dataBase)){
        struct node *newNode = (struct node *) calloc(1, sizeof(struct node));

        if (newNode == NULL) {
            printf("Error allocating memory\n");
            return 1;
        }

        int id;
        char characterName[64];
        char type[64];
        char tier[64];
        char power[64];

        if (sscanf(line, "%d,%[^,],%[^,],%[^,],%s", &id, characterName, type, tier, power) != 5){
            printf("Error parsing line\n");
            free(newNode);
            continue;
        }

        newNode->id = id;
        newNode->character = strdup(characterName);
        newNode->type = strdup(type);
        newNode->tier = strdup(tier);
        newNode->power = strdup(power);

        newNode->prev = NULL;
        newNode->next = NULL;

        if(*head == NULL){
            *head = newNode;
        }else{
            struct node *tail = *head;
            while (tail->next != NULL) {
                tail = tail->next;
            }

            tail->next = newNode;
            newNode->prev = tail;
        }
        size += 1;
    }
    fclose(dataBase);
    return true;
}