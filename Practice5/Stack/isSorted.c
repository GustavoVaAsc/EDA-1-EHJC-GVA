enum boolean isSorted(struct node **stackC){
    struct node *it = *stackC;
    enum boolean flag = true;
    int o = 1;
    if(stackC == NULL){
        printf("No hay elementos en la pila C! \n\n");
        getchar();
        fflush(stdin);
        clearScreen();
    }else{
        while(it != NULL){
            if(it->num == o){
                o++;
            }else{
                printf("Solucion incorrecta!!! \n\n");
                getchar();
                fflush(stdin);
                clearScreen();
                return false;
            }
            it = it->prev;
        }
        if(flag == true && o==6){
            printf("Solucion correcta! \n\n");
            getchar();
            fflush(stdin);
            clearScreen();
            exit(1);
        }else{
            printf("Solucion incorrecta!!! \n\n");
            getchar();
            fflush(stdin);
            clearScreen();
            return false;
        }
        getchar();
        fflush(stdin);
        clearScreen();
    }
    return false;
}