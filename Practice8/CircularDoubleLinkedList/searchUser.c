int searchUser(struct node **list, int *size, const char *searchString) {
    struct node *it = *list;

    do{
        if(strcmp(it->name, searchString) == 0){
            return it->id;
        }
        it= it->next;
    }while(it != *list);

    return -1;
}