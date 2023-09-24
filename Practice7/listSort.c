enum boolean listSort(struct node **h){
    struct node *it = *h;
    int sort = 1;
    do{
        it->id = sort;
        sort++;
        it = it->next;
    }while(it != *h);
}