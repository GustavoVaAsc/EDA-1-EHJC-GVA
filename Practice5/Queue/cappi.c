void cappi(){
    int ch;
    struct node *head = NULL;
    struct node *tail = NULL;
    char *rep[20] = {"Johnny","Alfonso","Jorjais","Ximena","Adam","Fiona","El Doramio"};
    float speed[7] = {50,65,30,75,60,55,100};
    int cont=1;
    clearScreen();
    intro();

    while(1){
        clearScreen();
        printf("Opciones: \n\n");
        printf("1: Ingresar datos del pedido \n");
        printf("2: Entregar\n");
        printf("3: Mostrar pedidos \n");
        printf("4: Salir \n\n");

        scanf("%d",&ch);
        fflush(stdin);

        switch(ch){
            case 1:
                enqueue(&head,&tail,&cont);
                break;
            case 2:
                dequeue(&head,&tail,&cont,rep,speed);
                break;
            case 3:
                show(head,cont);
                break;
            case 4:
                return;
        }
    }
}