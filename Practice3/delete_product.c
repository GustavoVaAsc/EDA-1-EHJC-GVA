void delete_product(struct node shop[TAM]){
    int id, cant, i,j;
    enum boolean flag[TAM];
    for(i=0; i<TAM; i++){
        flag[i]=false;
        
    }
    printf("Teclee el producto que desea eliminar: \n\n");
    for(i=0; i<TAM; i++){
        if(shop[i].cart > 0){
            printf("%i: %s\t Cantidad %i\n",i,shop[i].name,shop[i].cart);
            flag[i]=true;
        }
    }
    scanf ("%i",&id);
    if (id<0 || id>=TAM|| flag[id]==false) {
        return;
    }

    printf("Teclee la cantidad a eliminar: \n\n");
    scanf ("%i",&cant);
    fflush(stdin);
    if(cant >= 1 && cant<= shop[i].cart){
        shop[id].cart = shop[id].cart - cant;
        shop[id].stock = shop[id].stock + cant;
    }else{
        printf("\nError\n");
        getchar();
        fflush(stdin);
    }
}