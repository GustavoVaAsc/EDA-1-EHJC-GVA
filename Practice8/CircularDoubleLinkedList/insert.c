enum boolean insert(struct node **list, int *size, struct node *toInsert){
    struct node *newNode = (struct node *)calloc(1, sizeof(struct node));
    *newNode = *toInsert;
    if (toInsert == NULL) {
        return false; 
    }

    if(*list == NULL){
        *list = newNode;
        (*list)->next = *list;
        (*list)->prev = *list;
    }else{
        struct node *tail = (*list)->prev; 
        tail->next = newNode;
        newNode->prev = tail; 
        newNode->next = *list;
        (*list)->prev = newNode;
    }

    *size += 1;
}

/*

enum boolean insert(struct node **list, int *size, struct node *toInsert){
    struct node *newNode = (struct node *)calloc(1, sizeof(struct node));
    *newNode = *toInsert;
    if (toInsert == NULL) {
        return false; 
    }

    if(*list == NULL){
        *list = newNode;
        (*list)->next = *list;
        (*list)->prev = *list;
    }else{
        struct node *tail = (*list)->prev; 
        tail->next = newNode;
        newNode->prev = tail; 
        newNode->next = *list;
        (*list)->prev = newNode;
        *list = newNode;  
    }

    *size += 1;
}

*/