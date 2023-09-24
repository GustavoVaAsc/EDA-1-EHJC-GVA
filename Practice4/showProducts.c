void showProducts(struct node shop[TAM], struct item *cart){
    if(cart == NULL){
        printf("Usted no tiene elementos en su carrito! \n");
        getchar();
        fflush(stdin);
        return;
    }else{
        struct item *ptr = cart;
        printf("Su carrito contiene los siguientes productos: \n");
        printf("Producto\t Precio\t Cantidad\t Precio con Descuento\n");
        while(ptr != NULL){
            printf("%d: %s\t $ %.2f\t %d\t $ %.2f\n",ptr->id,shop[ptr->id].name,ptr->cant * shop[ptr->id].price, ptr->cant ,ptr->cant * shop[ptr->id].price * 0.80);
            ptr = ptr->next;
        }
    }
    getchar();
    fflush(stdin);
}