struct node *dequeue (struct node **h,struct node **t,int *cont, char *rep[20], float speed[7]){
    clearScreen();
    if(*t == NULL){
        printf("No hay pedidos en espera\n");
        fflush(stdin);
        getchar();
        return NULL;
    } else{
        struct node *tmp = *h;
        printf("No. de pedido: %d\n\n", tmp->id);
        printf("Entregado por %s\n\n", rep[*cont-1]);
        printf("Tiempo de entrega: %.3f hrs\n\n", tmp->distance/speed[*cont-1]);
        if(*h == *t){
            *cont = 0;
            *t = NULL;
            *h = NULL;
        } else {
            *h = (*h)->next;
            tmp = NULL; 
        }
        fflush(stdin);
        getchar();
        return tmp;
    }

}