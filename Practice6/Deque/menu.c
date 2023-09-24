void menu(){
    int ch;
    struct node *head = NULL;
    struct node *tail = NULL;
    int contT=0, contH=0;
    clearScreen();
    intro();

    while(1){
        clearScreen();
        printf("Opciones: \n\n");
        printf("1: Ingresar datos del cliente y cantidad de articulos \n");
        printf("2: Despachar clientes\n");
        printf("3: Mostrar filas\n");
        printf("4: Salir \n\n");

        scanf("%d",&ch);
        fflush(stdin);

        switch(ch){
            case 1:
                inputData(&head,&tail,&contH,&contT);
                break;
            case 2:
                clearScreen();
                int op;
                if(tail == NULL && head == NULL){
                    printf("No hay clientes en espera!\n");
                }else{
                    printf("De que fila quieres despachar un cliente? \n");
                    printf("1:Fila\n2:Unifila \n");
                    scanf("%d",&op);
                    fflush(stdin);
                    switch(op){
                        case 1:
                            pop_back(&head,&tail,&contH,&contT);
                            break;
                        case 2:
                            pop_front(&head,&tail,&contH,&contT);
                            break;
                        default:
                            printf("No se escogio una opcion valida \n");
                            getchar();
                            fflush(stdin);
                            clearScreen();
                            break;
                    }
                }
                break;
            case 3:
                show(head,contH);
                break;
            case 4:
                return;
        }
    }
}