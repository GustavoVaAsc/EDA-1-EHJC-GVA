enum boolean moveTop(struct node **stack1,struct node **stack2,int *cont1, int *cont2){
    clearScreen();
    static int moves = 0;
    struct node *it = *stack2;
    struct node *iT = *stack1;
    int num;
    if(it != NULL){
        num = it->num;
    }else{
        num = 0;
    }
    int aux=0;
    char sAux[10];
    if(iT->num < num || num == 0){
        aux = iT->num;
        strcpy(sAux, iT->visual);
        push(stack2,cont2,iT->num,sAux);
        pop(stack1, cont1);
        printf("Movimiento realizado con exito \n");
        moves++;
        printf("Numero de movimientos: %d\n", moves);
        getchar();
        fflush(stdin);
    }else{
        printf("Movimiento ilegal!!! \n");
        getchar();
        fflush(stdin);
        return false;
    }
    return true;
}