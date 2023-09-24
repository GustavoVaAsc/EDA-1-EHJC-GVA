struct node *pop_front(struct node **h, struct node **t, int *cHead, int *cTail){
    if (*h == NULL){
        clearScreen();
        printf("La fila esta vacia! \n");
        fflush(stdin);
        getchar();
        return NULL;
    } else {
        struct node *tmp = *h;
        if(tmp->articles>20){
            printf("Pedido de fila normal despachado en la unifila!\n");
        }else{
            printf("Pedido despachado en la unifila!\n");
        }
        if (*h == *t) {
            *cHead = 0;
            *cTail = 0;
            *t = NULL;
            *h = NULL;
        } else {
            *h = (*h)->next;
            (*h)->prev = NULL;
            tmp->next = NULL;
            *cHead -= 1;
        }
        fflush(stdin);
        getchar();
        return tmp;
    }
}