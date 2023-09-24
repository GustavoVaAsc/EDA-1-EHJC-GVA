int searchUser(struct node **list, int *size, const char *searchString) {
    struct node *it = *list;
    while (it != NULL){
        if (strcmp(it->character, searchString) == 0) {
            return it->id;
        }
        it = it->next;
    }
    return -1;
}