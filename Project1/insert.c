enum boolean insert(struct dllNode **list, int *size, struct dllNode *toInsert){
    struct dllNode *newNode = (struct dllNode *)calloc(1, sizeof(struct dllNode));
    *newNode = *toInsert;
    if (toInsert == NULL) {
        return false; 
    }

    if (*list == NULL) {
        *list = newNode;
    }else{
        struct dllNode *tail = *list;
        while (tail->next != NULL) {
            tail = tail->next;
        }

        tail->next = newNode;
        newNode->next = NULL;
        newNode->prev = tail;
        *size += 1;
        newNode->id = *size;
    }

    return true;
}