enum boolean popFront(struct dllNode **front, struct dllNode **back, int *qsize) {
    if (*front == NULL) {
        printf("Queue is empty\n");
        return false;
    }else if(*front == *back) {
        free((*front)->songName);
        free((*front)->artistName);
        free((*front)->genre);
        free((*front)->duration);
        free(*front);
        *front = NULL;
        *back = NULL;
    } else {
        struct dllNode *temp = *front;
        *front = (*front)->next;
        (*front)->prev = temp->prev;
        temp->prev->next = *front;
        free(temp->songName);
        free(temp->artistName);
        free(temp->genre);
        free(temp->duration);
        free(temp);
    }
    *qsize -= 1;
    return true;
}