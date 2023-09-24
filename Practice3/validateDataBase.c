void validateDataBase(struct node shop[TAM]){
    enum boolean res = loadProducts(shop);
    if(res){
        printf("Productos cargados\n");
        getchar();
        fflush(stdin);
    }else{
        printf("No hay productos\n");
        getchar();
        exit(-1);
    }
}