enum boolean listSort(struct dllNode **list){
    struct dllNode *it = *list;
    int sort = 1;
    while(it != NULL){
        it->id = sort;
        sort++;
        it = it->next;
    }
}