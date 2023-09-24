void delete_product(char *products[], float price[], int stockUser[2][8],int *ap){
    int id, cant, i,j;
    printf("Teclee el producto que desea eliminar: \n\n");
    for(i=0; i<8; i++){
        if(*(ap+(8+i)) > 0){
            printf("%i: %s\t Cantidad %i\n",i,*(products+i),*(ap+(8+i)));
        }
    }
    scanf ("%i",&id);
    if (id<0 || id>=8) {
        return;
    }
    printf("Teclee la cantidad a eliminar: \n\n");
    scanf ("%i",&cant);
    if(cant >= 1 && cant< *(ap+(8+id))){
        *(ap+(8+id)) = *(ap+(8+id)) - cant;
        *(ap+id) = *(ap+id) + cant;
    }else{
        printf("\nError\n");
        getchar();
        fflush(stdin);
    }
}