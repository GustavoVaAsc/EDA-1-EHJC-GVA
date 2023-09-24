void add_product(char *products[], float price[],int stockUser[2][8],int *ap){
    int id, cant, i,j;
    printf("Teclee el producto que desee agregar: \n\n");
    for(i=0; i<8; i++){
        printf("%i: %s\t Precio $ %.2f\t Stock: %i\n",i,*(products+i),*(price+i),*(ap+i));
    }
    scanf("%i",&id);
    if (id<0 || id>=8) {
        return;
    }
    printf("Teclee la cantidad deseada del producto: \n\n");
    scanf ("%i",&cant);
    if(cant >= 1 && cant<=*(ap+id)){
        *(ap+id) = *(ap+id) - cant;
        *(ap+(8+id)) = *(ap+(8+id)) + cant;
    }
    else {
        printf("\nError\n");
        getchar();
        fflush(stdin);
    }


}