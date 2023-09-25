void deleteAll(struct dllNode **list, int *size) {
    while (*list != NULL) {
        delete(list, size, (*list)->id);
    }
}