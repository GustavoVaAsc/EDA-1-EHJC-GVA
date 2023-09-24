void showProducts(){
    short int i = 0;
    printf("Su carrito contiene los siguientes productos: \n");
    printf("Producto\t Precio\t Cantidad\t Precio con Descuento\n");
    for(i = 0; i<8; i++){
        if(stockUser[1][i] > 0){
            printf("%s\t $ %.2f\t %d\t $ %.2f\n",products[i],stockUser[1][i]*price[i],stockUser[1][i],(stockUser[1][i]*price[i])*(0.80));
        }
    }
    fflush(stdin);
    getchar();
}