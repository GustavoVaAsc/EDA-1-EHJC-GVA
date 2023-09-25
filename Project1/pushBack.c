enum boolean pushBack(struct dllNode **front, struct dllNode **back, int *qsize, struct dllNode *toInsert) {
    struct dllNode *newNode = (struct dllNode *) malloc(sizeof(struct dllNode));
    *newNode = *toInsert;

    if (*back == NULL) {
        newNode->prev = newNode;
        newNode->next = newNode;
        *front = newNode;
        *back = newNode;
    } else {
        newNode->prev = *back;
        newNode->next = (*back)->next;
        (*back)->next->prev = newNode;
        (*back)->next = newNode;
        *back = newNode;
    }
    *qsize += 1;
    return true;
}
