enum boolean delete(struct node **h, int *size, int *id) {
    if (*h == NULL){
        return false;
    }

    struct node *it = *h;
    while (it->id != *id){
        it = it->next;
        if (it == *h) {
            return false;
        }
    }

    it->prev->next = it->next;
    it->next->prev = it->prev;

    if(it->prev == it->next && *size == 1){
        *h = NULL;
        *size = 0;
        return true;
    }    

    if (it == *h){
        *h = it->next;
    }
    if (it == (*h)->prev){
        (*h)->prev = it->prev;
    }
    *size -= 1;
    free(it);
    return true;
}
