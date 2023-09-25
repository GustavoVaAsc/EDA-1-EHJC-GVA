enum boolean delete(struct dllNode **list, int *size, int id) {
    if(*list == NULL){
        return false; 
    }

    struct dllNode *current = *list;
    while (current != NULL && current->id != id) {
        current = current->next;
    }

    if (current == NULL) {
        return false; 
    }

    if (current->prev == NULL) {
        *list = current->next; 
    } else {
        current->prev->next = current->next;
    }

    if (current->next != NULL) {
        current->next->prev = current->prev; 
    }

    *size -= 1;
    free(current->songName);
    free(current->artistName);
    free(current->genre);
    free(current->duration);
    free(current);

    listSort(list);
    return true;
}