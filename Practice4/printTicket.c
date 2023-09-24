void printTicket(struct node shop[TAM],struct item **cart){
    struct item *tmp = *cart;
    if(*cart == NULL){
        printf("No se encontraron productos en el carrito para efectuar la compra\n");
		getchar();
        fflush(stdin);
        return;
    }
    static short int cont = 64;
    cont++;
    char name[15]={"Ticket0.txt"};
    name[6] = cont;
    FILE *out = fopen(name, "w");
    int i = 0;
    float totalPrice = 0;
    fputs("----------------- PAIN CLOTHING -------------- \n\n",out);
    fputs("Producto\t Cantidad\t Precio\n\n",out);
    while(tmp!=NULL){
        fprintf(out,"%i: %s --------- %d -------- $ %.2f\n",tmp->id,shop[tmp->id].name,tmp->cant,(tmp->cant)*shop[tmp->id].price*(0.80));
        totalPrice = totalPrice + tmp->cant * shop[tmp->id].price *(0.80);
        tmp =  tmp->next;
    }
    fprintf(out,"\nPRECIO TOTAL ----------------- $ %.2f\n\n",totalPrice);
    fputs("------------ GRACIAS POR SU COMPRA! ------------",out);
    *cart = NULL;
    free(tmp);
    free(cart);
    fclose(out);
    printf("Productos comprados de manera exitosa!\n");
	getchar();
    fflush(stdin);
	return;
}