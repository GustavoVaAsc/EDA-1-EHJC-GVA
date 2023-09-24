void menu(){
    struct node *tazosC = NULL; //Base de canciones
    int csize = 0;
    struct node *tazosU = NULL; //Playlist del usuario
    int usize = 0;
    short choice = 0;
    char name[64];
    int id;
    struct node *newNode = NULL;
    struct node *temp = NULL;
    readDatabase(&tazosC, &csize);

    while(1){
        clearScreen();
        printf("COLECCION DE TAZOS!!\n\n");
        printf("\n1 - Agregar a tu coleccion\n");
        printf("2 - Borrar de tu coleccion\n");
        printf("3 - Borrar coleccion\n");
        printf("4 - Mostrar coleccion\n");
        printf("5 - Salir\n");
        fflush(stdout);
        scanf("%hd", &choice);
        fflush(stdin);
        switch(choice){
            case 1:
                showList(&tazosC);
                printf("Ingresa el nombre del personaje en el tazo:\n");
                gets(name);
                fflush(stdin);
                if(strlen(name)>64) break;
                id = searchUser(&tazosC,&csize,name);
                if (id == -1){
                    printf("El tazo no existe\n");
                    getchar();
                    fflush(stdin);
                    break;
                }
                newNode = searchID(&tazosC,&csize,id);
                temp = searchID(&tazosU,&usize,id);
                if(temp != NULL){
                    printf("Tazo repetido!\n");
                    getchar();
                    fflush(stdin);
                    break;
                }
                insert(&tazosU,&usize,newNode);
                printf("Tazo agregado a tu coleccion!\n");
                getchar();
                fflush(stdin);
                break;
            case 2:
                showList(&tazosU);
                printf("Ingresa el nombre del personaje en el tazo:\n");
                gets(name);
                fflush(stdin);
                if(strlen(name)>64) break;
                id = searchUser(&tazosU,&usize,name);
                if (id == -1){
                    printf("El tazo no existe\n");
                    getchar();
                    fflush(stdin);
                    break;
                }
                delete(&tazosU,&usize,id);
                printf("Tazo eliminado de la coleccion!\n");
                getchar();
                fflush(stdin);
                break;
            case 3:
                printf("Estas seguro de querer borrar toda tu coleccion?\nY:Si\tOtro input:No\n");
                if(getchar()=='Y' || getchar()=='y'){
                    deleteAll(&tazosU,&usize);
                }
                break;
            case 4:
                showList(&tazosU);
                showListReverse(&tazosU);
                break;
            case 5:
                return;
            default:
                printf("Error: Opcion invalida\n");
                break;
        }
    }

    
}