void show(struct node *h, int cHead){
    struct node *tmp = h;
    clearScreen();
    if(tmp == NULL) {
        printf("No hay clientes en espera!\n");
        fflush(stdin);
        getchar();
        return;
    }

    while (tmp != NULL) {
        printf("\nCliente no.: %d del dia\n\n",tmp->id);
        printf("Nombre del cliente: %s\n", tmp->name);
        printf("Total de articulos comprados %d\n", tmp->articles);
        printf("Precio a pagar: %.3f\n", tmp->price);
        tmp = tmp->next;
    }

    fflush(stdin);
    getchar();
    return;
}