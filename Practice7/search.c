struct node *search(struct node **h, int id){
    struct node *it = *h;
    do{
        if(id == it->id){
            return it;
        }
        it= it->next;
    }while(it != *h);    
    return NULL;
}