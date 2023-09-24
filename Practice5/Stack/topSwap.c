enum boolean topSwap(struct node **stackA,struct node **stackB,struct node **stackC, int *contA, int *contB, int *contC){
    int c, d, one, two, three;
    struct node *it = *stackA;
    if(it != NULL){
        one = it->num;
    }else{
        one = 0;
    }
    
    it = *stackB;
    if(it != NULL){
        two = it->num;
    }else{
        two = 0;
    }
    it = *stackC;
    if(it != NULL){
        three = it->num;
    }else{
        three = 0;
    }
    clearScreen();
    printf("Elige el disco que deseas mover \n");
    printf("1: Disco A: %d, 2: Disco B: %d, 3: Disco C: %d\n", one, two, three);
    scanf("%d",&c);
    fflush(stdin);
    switch (c){
        case 1:
            if(one == 0) return false;
            printf("\nA que pila quieres mover el disco\n");
            printf("\n2: Fila B, Cualquier otro: Fila C\n");
            scanf("%d",&d);
            fflush(stdin);
            if(d == 2){
                moveTop(stackA,stackB,contA,contB);
            }else{
                moveTop(stackA,stackC,contA,contC);
            }
            break;
        case 2:
            if(two == 0) return false;
            printf("\nA que pila quieres mover el disco\n");
            printf("\n1: Fila A, Cualquier otro: Fila C\n");
            scanf("%d",&d);
            fflush(stdin);
            if(d == 1){
                moveTop(stackB,stackA,contB,contA);
            }else{
                moveTop(stackB,stackC,contB,contC);
            }
            break;
        case 3:
            if(three == 0) return false;
            printf("\nA que pila quieres mover el disco\n");
            printf("\n1: Fila A, Cualquier otro: Fila B\n");
            scanf("%d",&d);
            fflush(stdin);
            if(d == 1){
                moveTop(stackC,stackA,contC,contA);
            }else{
                moveTop(stackC,stackB,contC,contB);
            }
            break;
        default:
            return false;
    }
    return true;
}