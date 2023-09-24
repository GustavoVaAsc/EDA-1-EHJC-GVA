void menu(){
    int ch;
    struct node *head = NULL;
    struct node *tail = NULL;
    int cont=1;
    clearScreen();
    intro();

    while(1){
        clearScreen();
        printf("Opciones: \n\n");
        printf("1: Registrarse a la fila virtual\n");
        printf("2: Iniciar fila\n");
        printf("3: Mostrar fila\n");
        printf("4: Salir \n\n");

        scanf("%d",&ch);
        fflush(stdin);

        switch(ch){
            case 1:
                userRegister(&head,&tail,&cont);
                break;
            case 2:
                startQueue(&head,&tail,&cont);
                break;
            case 3:
                show(head,tail,cont);
                break;
            case 4:
                return;
        }
    }
}