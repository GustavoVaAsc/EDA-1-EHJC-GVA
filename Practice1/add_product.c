void add_product(){
    int id, cant, i,j;
    printf("Teclee el producto que desee agregar: \n\n");
    for(i=0; i<8; i++){
        fflush(stdin);
        printf("%i: %s\t Precio $ %.2f\t Stock: %i\n",i,products[i],price[i],stockUser[0][i]);
    }
    scanf("%i",&id);
    if (id<0 || id>=8) {
        return;
    }
    printf("Teclee la cantidad deseada del producto: \n\n");
    scanf ("%i",&cant);
    if(cant >= 1 && cant<=stockUser[0][id]){
        stockUser[0][id] = stockUser[0][id] - cant;
        stockUser[1][id] = stockUser[1][id] + cant;
    }
    else {
        printf("\nError\n");
        getchar();
    }


}