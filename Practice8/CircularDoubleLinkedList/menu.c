void menu(){
    int ch;
    struct node *characterSelection = NULL;
    int chsize = 0;
    struct node *team = NULL;
    int teamsize = 0;
    readDB(&characterSelection,&chsize);
    
    //Temp info
    int id;
    struct node *newNode;
    char name[64];
    //intro();

    while(1){
        clearScreen();
        printf("-*+-*+-*+-*+-*+-*+-*+-*+-*+-*+-*+-*+-*+- Universe Brawlers!! -*+-*+-*+-*+-*+-*+-*+-*+-*+-*+-*+-*+-*+-\n\n");
        printf("                                        1: Formar equipo \n");
        printf("                                        2: Buscar estadisticas\n");
        printf("                                        3: Mostrar equipo\n");
        printf("                                        4: Eliminar personaje del equipo\n");
        printf("                                        5: Pelear vs COM\n");
        printf("                                        6: Salir \n");

        scanf("%d",&ch);
        fflush(stdin);

        switch(ch){
            case 1:
                createTeam(&characterSelection, &chsize,&team,&teamsize);
                break;
            case 2:
                clearScreen();
                printf("Ingresa el nombre del Brawler a buscar: \n");
                gets(name);
                fflush(stdin);
                if(strlen(name)>64) break;
                id = searchUser(&characterSelection,&chsize,name);
                if (id == -1){
                    printf("El brawler a buscar no existe!\n");
                    getchar();
                    fflush(stdin);
                    break;
                }
                newNode = searchID(&characterSelection,&id);
                printf("El brawler %s tiene las siguientes estadisticas: \n\n",newNode->name);
                printf("Ataque: %hd\n",newNode->atk);
                printf("Defensa %hd\n",newNode->def);
                printf("Puntos de vida: %hd\n",newNode->health);
                getchar();
                fflush(stdin);
                break;
            case 3:
                show(&team);
                break;
            case 4:
                show(&team);
                if(team == NULL){
                    break;
                }
                printf("Ingresa el nombre del brawler a eliminar:\n");
                gets(name);
                fflush(stdin);
                if(strlen(name)>64) break;
                id = searchUser(&team,&teamsize,name);
                if (id == -1){
                    printf("El brawler que buscaste no esta en tu equipo o no existe\n");
                    getchar();
                    fflush(stdin);
                    break;
                }
                delete(&team,&teamsize,&id);
                printf("Brawler eliminado con exito!\n");
                getchar();
                fflush(stdin);
                break;
            case 5:
                //startFight(&team,&teamsize,&characterSelection,&chsize);
                break;
            case 6:
                return;
        }
    }
}