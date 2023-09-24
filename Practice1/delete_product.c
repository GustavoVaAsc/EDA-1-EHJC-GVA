void delete_product(){
    int id, cant, i,j;
    printf("Teclee el producto que desea eliminar: \n\n");
    for(i=0; i<8; i++){
        if(stockUser[1][i] > 0){
            printf("%i: %s\t Cantidad %i\n",i,products[i],stockUser[1][i]);
        }
    }
    scanf ("%i",&id);
    if (id<0 || id>=8) {
        return;
    }
    printf("Teclee la cantidad a eliminar: \n\n");
    scanf ("%i",&cant);
    if(cant >= 1 && cant<=stockUser[1][id]){
        stockUser[1][id] = stockUser[1][id] - cant;
        stockUser[0][id] = stockUser[0][id] + cant;
    }else{
        printf("\nError\n");
        getchar();
    }
}