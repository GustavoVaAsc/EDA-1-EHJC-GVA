enum boolean pushFront(struct dllNode **front, struct dllNode **back, int *qsize, struct dllNode *toInsert) {
    struct dllNode *newNode = (struct dllNode *) malloc(sizeof(struct dllNode));
    *newNode = *toInsert;

    if(*front == NULL) {
        newNode->prev = newNode;
        newNode->next = newNode;
        *front = newNode;
        *back = newNode;
    }else{
        newNode->prev = (*front)->prev;
        newNode->next = *front;
        (*front)->prev->next = newNode;
        (*front)->prev = newNode;
        *front = newNode;
    }
    *qsize += 1;
    return true;
}
