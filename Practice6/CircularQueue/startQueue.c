enum boolean startQueue(struct node **h, struct node **t, int *c){
    printf("Deseas usar la opcion simulada o simplemente desencolar?\n\n");
    printf("Y: Si N(O cualquier otra opcion): No\n");
    if(getchar()=='Y'){
        while(*t!=NULL){
            for(int i=60; i>0; i--){
                printf("******************************************************************************\n\n\n");
                printf("             Faltan %d segundos para realizar la compra de tu boleto\n\n\n\n", i);
                printf("******************************************************************************\n");
                Sleep(1000);
                clearScreen();
            }
            pop(h,t,c);
        }
    }else{
        pop(h,t,c);
    }

    
}