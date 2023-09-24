void add_product(struct node shop[TAM]){
    int id, cant, i;
    printf("Teclee el producto que desee agregar: \n\n");
    for(i=0; i<8; i++){
        printf("%i: %s\t Precio $ %.2f\t Stock: %i\n",i,shop[i].name,shop[i].price,shop[i].stock);
    }
    scanf("%i",&id);
    fflush(stdin);
    if (id<0 || id>=8) {
        return;
    }
    printf("Teclee la cantidad deseada del producto: \n\n");
    scanf ("%i",&cant);
    fflush(stdin);
    if(cant >= 1 && cant<=shop[id].stock){
        shop[id].stock = shop[id].stock - cant;
        shop[id].cart = shop[id].cart + cant;
    }
    else{
        printf("\nError\n");
        getchar();
        fflush(stdin);
    }


}