void show(struct node *stackA,struct node *stackB,struct node *stackC){
    struct node *it = stackA;
    clearScreen();
    if(stackA == NULL){
        printf("No hay elementos en la pila A! \n\n");
        getchar();
        fflush(stdin);
        clearScreen();
    }else{
        printf("-*-*-*-*-*-*-*-*-*-*-*-*-*- PILA A -*-*-*-*-*-*-*-*-*-*-*-*-*-\n\n");
        while(it != NULL){
            printf("%s %d \n",it->visual, it->num);
            it = it->prev;
        }
        getchar();
        fflush(stdin);
        clearScreen();
    }

    it = stackB;

    if(stackB == NULL){
        printf("No hay elementos en la pila B! \n\n");
        getchar();
        fflush(stdin);
        clearScreen();
    }else{
        printf("-*-*-*-*-*-*-*-*-*-*-*-*-*- PILA B -*-*-*-*-*-*-*-*-*-*-*-*-*-\n\n");
        while(it != NULL){
            printf("%s %d \n",it->visual, it->num);
            it = it->prev;
        }
        getchar();
        fflush(stdin);
        clearScreen();
    }

    it = stackC;

    if(stackC == NULL){
        printf("No hay elementos en la pila C! \n\n");
        getchar();
        fflush(stdin);
        clearScreen();
    }else{
        printf("-*-*-*-*-*-*-*-*-*-*-*-*-*- PILA C -*-*-*-*-*-*-*-*-*-*-*-*-*-\n\n");
        while(it != NULL){
            printf("%s %d \n",it->visual, it->num);
            it = it->prev;
        }
        getchar();
        fflush(stdin);
        clearScreen();
    }
    
}