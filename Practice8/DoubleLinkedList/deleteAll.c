void deleteAll(struct node **list, int *size) {
    while (*list != NULL) {
        delete(list, size, (*list)->id);
    }
}