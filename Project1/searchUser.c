int searchUser(struct dllNode **list, int *size, const char *searchString) {
    struct dllNode *it = *list;
    while (it != NULL){
        if (strcmp(it->songName, searchString) == 0) {
            return it->id;
        }
        it = it->next;
    }
    return -1;
}