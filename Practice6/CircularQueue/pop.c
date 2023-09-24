struct node *pop(struct node **h,struct node **t,int *cont){
    clearScreen();
    if(*t == NULL){
        printf("NO HAY PERSONAS REGISTRADAS PARA LA FILA VIRTUAL");
        fflush(stdin);
        getchar();
        return NULL;
    } else{
        struct node *tmp = *h;
        printf("Boleto con id: %d vendido!, quedan %d personas en la cola!",tmp->id,*cont-1);
        if(*h == *t){
            *cont = 0;
            *t = NULL;
            *h = NULL;
        } else {
            *h = (*h)->next;
            (*t)->next = *h;
            tmp = NULL;
            *cont -= 1; 
        }
        fflush(stdin);
        getchar();
        return tmp;
    }

}