enum boolean delete(struct node **list, int *size, int id) {
    if(*list == NULL){
        return false; 
    }

    struct node *current = *list;
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
    free(current->character);
    free(current->type);
    free(current->tier);
    free(current->power);
    free(current);

    return true;
}