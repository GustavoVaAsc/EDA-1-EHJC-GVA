enum boolean insert(struct node **h,char n[30], int id){
    struct node *tmp = (struct node *)calloc(1,sizeof(struct node));
    strcpy(tmp->name,n);
    tmp->id = id;
    tmp->next = *h;


    if(*h == NULL) {
        *h = tmp;
        tmp->next = tmp;
    } else {
        struct node *tmp2 = *h;
        while (tmp2->next != *h) {
            tmp2 = tmp2->next;
        }
        tmp2->next = tmp;
    }
    return true;
}