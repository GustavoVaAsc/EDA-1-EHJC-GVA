void readDB(struct node **list,int *dbsize) {
    FILE* fp = fopen("db.txt", "r");
    if (fp == NULL) {
        printf("Error leyendo la base de datos!\n");
        return;
    }
    int id;
    char name[64];
    short atk, def, health;
    while(fscanf(fp, "%d %s %hd %hd %hd", &id, name, &atk, &def, &health) != EOF) {
        struct node *newNode = (struct node*) calloc(1,sizeof(struct node));
        newNode->id = id;
        strcpy(newNode->name, name);
        newNode->atk = atk;
        newNode->def = def;
        newNode->health = health;
        newNode->next = NULL;
        newNode->prev = NULL;
        insert(list,dbsize,newNode);

        *dbsize += 1;
    }

    fclose(fp);
}