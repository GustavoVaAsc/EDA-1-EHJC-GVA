enum boolean playlistOptions(struct dllNode **db, struct dllNode **playlist,int *dbsize, int *psize,char *username){
    short choice = 0;
    char name[64];
    int id;
    struct dllNode *newNode = NULL;
    struct dllNode *temp = NULL;

    while(1){
        clearScreen();
        printf(BHGRN"Playlist de: %s\n\n"reset, username);
        printf(BGRN"\n1 - Agregar a la playlist\n");
        printf("2 - Borrar de la playlist\n");
        printf("3 - Reiniciar playlist\n");
        printf("4 - Mostrar playlist\n");
        printf("5 - Salir\n"reset);
        fflush(stdout);
        printf(BRED"\nPara guardar los cambios en la playlist se debe salir mediante la opcion 5 una vez realizados\n"reset);
        scanf("%hd", &choice);
        fflush(stdin);
        switch(choice){
            case 1:
                showList(db);
                printf(BGRN"Ingresa el nombre de la cancion:\n"reset);
                gets(name);
                fflush(stdin);
                if(strlen(name)>64) break;
                id = searchUser(db,dbsize,name);
                if (id == -1){
                    printf(BRED"La cancion no existe\n"reset);
                    getchar();
                    fflush(stdin);
                    break;
                }
                newNode = searchID(db,dbsize,id);
                temp = searchID(playlist,psize,id);
                if(temp != NULL){
                    printf(BRED"La cancion ya existe en tu playlist\n"reset);
                    getchar();
                    fflush(stdin);
                    break;
                }
                insert(playlist,psize,newNode);
                printf(BHWHT"Cancion agregada con exito!\n"reset);
                getchar();
                fflush(stdin);
                break;
            case 2:
                showList(playlist);
                printf(BGRN"Ingresa el nombre de la cancion:\n"reset);
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
                delete(playlist,psize,id);
                printf(BHWHT"Cancion eliminada con exito!\n"reset);
                getchar();
                fflush(stdin);
                break;
            case 3:
                printf(BRED"Estas seguro de querer borrar toda la playlist?\nY:Si\tOtro input:No\n"reset);
                if(getchar()=='Y' || getchar()=='y'){
                    deleteAll(playlist,psize);
                }
                break;
            case 4:
                showList(playlist);
                break;
            case 5:
                writePlaylist(playlist,username);
                return true;
            default:
                printf(BRED"Error: Opcion invalida\n"reset);
                break;
        }
    }

    
}