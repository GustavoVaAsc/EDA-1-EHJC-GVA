enum boolean popBack(struct dllNode **front, struct dllNode **back, int *qsize) {
    if(*back == NULL){
        printf("No hay elementos en la cola\n");
        return false;
    }else if(*front == *back){
        free((*back)->songName);
        free((*back)->artistName);
        free((*back)->genre);
        free((*back)->duration);
        free(*back);
        *front = NULL;
        *back = NULL;
    }else{
        struct dllNode *temp = *back;
        *back = (*back)->prev;
        (*back)->next = temp->next;
        temp->next->prev = *back;
        free(temp->songName);
        free(temp->artistName);
        free(temp->genre);
        free(temp->duration);
        free(temp);
    }
    *qsize -= 1;
    return true;
}