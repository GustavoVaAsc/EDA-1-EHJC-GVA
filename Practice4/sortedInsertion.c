enum boolean sortedInsertion(struct item **cart, int id){
    struct item *it = *cart;
    struct item *prev = it;

    if(id<*cart->id){
        struct item *tmp = (struct item *)calloc(1,sizeof(struct item));
        tmp->id=id;
        tmp->cant = cant;
        tmp->next = *cart;
        *cart = tmp;
        shop[tmp->id].stock -= cant;
    }else{
        while(id > it->id){
            prev = it;
            it = it->next;
        }
        struct item *tmp2 = (struct item *)calloc(1,sizeof(struct item));
        tmp2->id=id; 
        tmp2->cant=cant; 
        tmp2->next = NULL;
        shop[tmp2->id].stock -= cant;
    }
}