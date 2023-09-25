struct dllNode *searchID(struct dllNode **list, int *size, int id) {
    struct dllNode *it = *list;
    while (it != NULL){
        if (it->id == id) {
            return it;
        }
        it = it->next;
    }
    return NULL;
}