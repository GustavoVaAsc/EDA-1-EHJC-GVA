enum boolean songQueueOptions(struct dllNode **playlist, int *psize, struct dllNode **h, struct dllNode **t, int *qsize){
    short choice = 0;
    char name[64];
    int id;
    struct dllNode *newNode = NULL;
    while(1){
        clearScreen();
        printf(BHGRN"Opciones para cola de reproduccion \n\n"reset);
        printf(BGRN"\n1 - Agregar al final\n");
        printf("2 - Agregar al inicio\n");
        printf("3 - Eliminar ultimo\n");
        printf("4 - Eliminar primero\n");
        printf("5 - Mostrar cola\n");
        printf("6 - Salir\n"reset);
        fflush(stdout);

        scanf("%hd", &choice);
        fflush(stdin);
        switch(choice){
            case 1:
                if(*qsize == MAX_QUEUE){
                    printf(BRED"Error: Cola de reproduccion llena!\n"reset);
                    break;
                }
                showList(playlist);
                printf(BGRN"Ingresa el nombre de la cancion a agregar a la cola:\n"reset);
                gets(name);
                fflush(stdin);
                if(strlen(name)>64) break;
                id = searchUser(playlist,psize,name);
                if (id == -1){
                    printf(BRED"La cancion no existe\n"reset);
                    getchar();
                    fflush(stdin);
                    break;
                }
                newNode = searchID(playlist,psize,id);
                pushBack(h,t,qsize,newNode);
                printf(BHWHT"Cancion agregada con exito!\n"reset);
                getchar();
                fflush(stdin);
                break;
            case 2:
                if(*qsize == MAX_QUEUE){
                    printf(BRED"Error: Cola de reproduccion llena!\n"reset);
                    break;
                }
                showList(playlist);
                printf(BGRN"Ingresa el nombre de la cancion a agregar a la cola:\n"reset);
                gets(name);
                fflush(stdin);
                if(strlen(name)>64) break;
                id = searchUser(playlist,psize,name);
                if (id == -1){
                    printf(BRED"La cancion no existe\n"reset);
                    getchar();
                    fflush(stdin);
                    break;
                }
                newNode = searchID(playlist,psize,id);
                pushFront(h,t,qsize,newNode);
                printf(BHWHT"Cancion agregada con exito!\n"reset);
                getchar();
                fflush(stdin);
                break;
            case 3:
                popBack(h,t,qsize);
                printf(BHWHT"Cancion eliminada con exito!\n"reset);
                getchar();
                fflush(stdin);
                break;
            case 4:
                popFront(h,t,qsize);
                printf(BHWHT"Cancion eliminada con exito!\n"reset);
                getchar();
                fflush(stdin);
                break;
            case 5:
                circularShow(t);
                break;
            case 6:
                return true;
            default:
                printf(BRED"Error: Opcion invalida\n"reset);
                break;
        }
    }

    
}