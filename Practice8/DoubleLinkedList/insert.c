enum boolean insert(struct node **list, int *size, struct node *toInsert){
    struct node *newNode = (struct node *)calloc(1, sizeof(struct node));
    *newNode = *toInsert;
    newNode->next = NULL;
    newNode->prev = NULL;
    if (toInsert == NULL) {
        return false; 
    }

    if (*list == NULL) {
        *list = newNode;
    }else{
        struct node *tail = *list;
        while (tail->next != NULL) {
            tail = tail->next;
        }

        tail->next = newNode;
        newNode->next = NULL;
        newNode->prev = tail;
        *size += 1;
    }

    return true;
}