struct item *binarySearch(struct item *cart, int id){
    struct item *tmp = cart;

    while(tmp != NULL){
        if(id == tmp->id){
            return tmp;
        }
        tmp = tmp->next;
    }
    return NULL;
}