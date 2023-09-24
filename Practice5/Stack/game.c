void game(){
    int ch;
    struct node *stackA = NULL;
    struct node *stackB = NULL;
    struct node *stackC = NULL;
    int contA=0, contB=0, contC=0;
    intro();
    clearScreen();
    createHanoi(&stackA, &contA);
    while(1){
        clearScreen();
        printf("Opciones: \n\n");
        printf("1: Ver pilas \n");
        printf("2: Intercambiar cimas \n");
        printf("3: Revisar solucion\n");
        printf("4: Salir \n");

        scanf("%d",&ch);
        fflush(stdin);

        switch(ch){
            case 1:
                show(stackA,stackB,stackC);
                break;
            case 2:
                topSwap(&stackA,&stackB,&stackC, &contA, &contB, &contC);
                break;
            case 3:
                isSorted(&stackC);
                break;
            case 4:
                return;
            case 256:
                break;
        }
    }
}