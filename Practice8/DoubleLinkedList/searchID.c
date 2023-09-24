struct node *searchID(struct node **list, int *size, int id) {
    struct node *it = *list;
    while(it != NULL){
        if(it->id == id){
            return it;
        }
        it = it->next;
    }
    return NULL;
}