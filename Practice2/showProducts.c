void showProducts(char *products[], float price[],int stockUser[2][8],int *ap){
    int i = 0;
    char flag = 'F';

    for(i = 0; i<8; i++){
        if(*(ap+(8+i)) > 0){
            flag = 'V';
            i=8;
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
        for(i = 0; i<8; i++){
            if(*(ap+(8+i))> 0){
                printf("%s\t $ %.2f\t %d\t $ %.2f\n",*(products+i),(*(ap+(8+i)))* *(price+i),*(ap+(8+i)),((*(ap+(8+i)))* *(price+i)*(0.80)));
            }
        }
    }
    getchar();
    fflush(stdin);
}