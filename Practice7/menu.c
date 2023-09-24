void menu(){
    int ch, id, op;
    struct node *h = NULL;
    clearScreen();
    //intro();

    while(1){
        clearScreen();
        printf("-*+-*+-*+-*+-*+-*+-*+-*+-*+-*+-*+-*+-*+- PATO PATO GANSO! -*+-*+-*+-*+-*+-*+-*+-*+-*+-*+-*+-*+-*+-\n\n");
        printf("                                        1: Agregar participantes \n");
        printf("                                        2: Iniciar juego\n");
        printf("                                        3: Eliminar participantes\n");
        printf("                                        4: Revisar registro\n");
        printf("                                        5: Salir\n");

        scanf("%d",&ch);
        fflush(stdin);

        switch(ch){
            case 1:
                createList(&h);
                break;
            case 2:
                duckDuckGoose(&h);
                break;
            case 3:
                printf("Selecciona el id del participante a eliminar: \n");
                scanf("%d",&id);
                fflush(stdin);
                unregister(&h,id);
                break;
            case 4:
                printf("Selecciona una opcion:\n1: Mostrar lista\n2: Buscar por no. de registro\n");
                scanf("%d",&op);
                fflush(stdin);
                if(op == 1){
                    show(&h);
                }else{
                    printf("Ingrese el id a buscar:\n");
                    scanf("%d",&id);
                    fflush(stdin);
                    struct node *s = h;
                    if(s == NULL){
                        printf("No hay participantes registrados!\n",s->id,s->name);
                        break;
                    }
                    do{
                        if(id == s->id){
                            printf("Participante encontrado: %d.- %s\n",s->id,s->name);
                            getchar();
                            fflush(stdin);
                            break;
                        }
                        s= s->next;
                    }while(s != h);   
                }
                break;
            case 5:
                return;
        }
    }
}