void show(struct node *h, int cont){
    struct node *tmp = h;
    clearScreen();
    if(tmp == NULL) {
        printf("No hay clientes en espera\n");
        fflush(stdin);
        getchar();
        return;
    }

    while (tmp != NULL) {
        printf("\nNumero de pedido: %d\n\n",tmp->id);
        printf("Nombre del cliente: %s\n", tmp->name);
        printf("Nombre del establecimiento: %s\n", tmp->shop);
        printf("Precio a pagar: %.3f\n", tmp->price);
        tmp = tmp->next;
    }

    fflush(stdin);
    getchar();
    return;
}