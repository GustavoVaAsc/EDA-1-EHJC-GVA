int checkProducts(){
    int i,option;
    char flag = 'V';
    for(i=0; i<8; i++){
        if(stockUser[1][i]>0){
            flag = 'F';
        }
    }
    if(flag == 'V'){
        return 1;
    }else{
        printf("Usted a%cn tiene elementos en su carrito. %cSeguro que desea salir del programa?\n0: No\n1: Si\n",163,168);
        scanf("%i",&option);
        if(option == 0){
            return 0;
        }else{
            return 1;
        }
    }

}