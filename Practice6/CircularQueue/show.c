void show(struct node *h, struct node *t,int c){
    struct node *tmp = h;
    clearScreen();
    if(tmp == NULL) {
        printf("No hay clientes en espera!\n");
        fflush(stdin);
        getchar();
        return;
    }

    do{
        printf("\nID del cliente: %d del dia\n\n",tmp->id);
        printf("Nombre del cliente: %s\n", tmp->name);
        printf("Seccion del boleto: %d\n", tmp->section);
        printf("Precio a pagar: %.3f\n", tmp->price);
        tmp = tmp->next;
    }while (tmp != h && t != h);

    fflush(stdin);
    getchar();
    return;
}