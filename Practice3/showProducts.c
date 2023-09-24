void showProducts(struct node stock[TAM]){
    getchar();
    fflush(stdin);
    int i = 0;
    char flag = 'F';

    for(i = 0; i<TAM; i++){
        if(stock[i].cart != 0){
            flag = 'V';
            i=TAM;
        }

    }
    if(flag == 'F'){
        printf("Usted no tiene elementos en su carrito! \n");
        getchar();
        fflush(stdin);
        return;
    }else{
        printf("Su carrito contiene los siguientes productos: \n");
        printf("Producto\t Precio\t Cantidad\t Precio con Descuento\n");
        for(i = 0; i<TAM; i++){
            if(stock[i].cart > 0){
                printf("%s\t $ %.2f\t %d\t $ %.2f\n",stock[i].name,stock[i].price*stock[i].cart,stock[i].cart,(stock[i].price*stock[i].cart)*0.80);
            }
        }
    }
    getchar();
    fflush(stdin);
}