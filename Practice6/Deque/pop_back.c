struct node *pop_back(struct node **h, struct node **t, int *cHead, int *cTail){
    if (*t == NULL){
        clearScreen();
        printf("La fila esta vacia! \n");
        fflush(stdin);
        getchar();
        return NULL;
    }else{
        struct node *tmp = *t;
        if(tmp->articles<=20){
            printf("Pedido de unifila despachado en la fila normal!\n");
        }else{
            printf("Pedido de fila normal despachado!\n");
        }
        if (*h == *t) {
            *cHead = 0;
            *cTail = 0;
            *t = NULL;
            *h = NULL;
        } else {
            *t = (*t)->prev;
            (*t)->next = NULL;
            tmp->prev = NULL;
            *cTail -= 1;
        }
        fflush(stdin);
        getchar();
        return tmp;
    }
}