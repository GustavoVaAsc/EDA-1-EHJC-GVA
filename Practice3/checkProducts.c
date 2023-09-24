enum boolean checkProducts(struct node shop[TAM]){
    int i,option;
    char flag = 'V';
    for(i=0; i<8; i++){
        if(shop[i].cart>0){
            flag = 'F';
        }
    }
    if(flag == 'V'){
        return true;
    }else{
        printf("Usted a%cn tiene elementos en su carrito. %cSeguro que desea salir del programa?\n0: No\n1: Si\n",163,168);
        scanf("%i",&option);
        fflush(stdin);
        if(option == 0){
            return false;
        }else{
            return true;
        }
    }

}