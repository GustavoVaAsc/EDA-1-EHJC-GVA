enum boolean checkProducts(struct item *cart){
    int i,option;
    if(cart!=NULL){
        printf("Usted a%cn tiene elementos en su carrito. %cSeguro que desea salir del programa?\n0: No\n1: Si\n",163,168);
        scanf("%i",&option);
        fflush(stdin);
        if(option == 0){
            return false;
        }else{
            return true;
        }
    }
    return true;
}