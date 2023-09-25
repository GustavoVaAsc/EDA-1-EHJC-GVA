void menu(char *username){
    short choice;
    char buff[64];
    int id = 0;
    //Definimos dos listas dobles

    struct dllNode *songDB = NULL; //Base de canciones
    int dbSize = 0;
    struct dllNode *playlist = NULL; //Playlist del usuario
    int playlistSize = 0;
    //Definimos la cola circular del usuario

    struct stackNode *randomS = NULL;
    int randomSize = 0;
    //Definimos la pila para aleatorizar



    struct dllNode *front = NULL;
    struct dllNode *back = NULL;
    int dequeSize = 0;

    int songQueueSize = 0;
    readDatabase(&songDB, &dbSize);
    readPlaylist(&playlist, &playlistSize,username);
    while(1){
        clearScreen();
        fflush(stdout);
        printf(BGRN"----------------------- Menu -----------------------\n\n"reset);
        printf(BHGRN"    1 - Modificar playlist \n"reset);
        printf(BHGRN"    2 - Agregar canciones a la cola de reproduccion \n"reset);
        printf(BHGRN"    3 - Iniciar reproduccion de la cola \n"reset);
        printf(BHGRN"    4 - Buscar y reproducir una cancion especifica \n"reset);
        fflush(stdout);
        printf(BHGRN"    5 - Aleatorizar una playlist y reproducirla \n"reset);
        printf(BHGRN"    6 - Mostrar lista de canciones \n"reset);
        printf(BHGRN"    7 - Salir \n\n"reset);
        fflush(stdout);
        printf(BGRN"----------------------- Notas -----------------------\n\n"reset);
        printf(BHGRN"-Entre canciones tendra la opcion de omitir la cancion o de modificar\nla cola de reproduccion segun guste\n"reset);
        printf(BHGRN"-La cola de reproduccion tiene un tope maximo de 20 canciones\n"reset);
        fflush(stdout);
        printf(BHGRN"-La cola de reproduccion aleatoria tiene un tope maximo de 7 canciones\n"reset);
        printf(BHGRN"-Si usted se sale del reproductor de su sistema, el programa terminara\n\n"reset);
        fflush(stdout);
        scanf("%hd", &choice);
        switch(choice){
            case 1:
                playlistOptions(&songDB, &playlist,&dbSize,&playlistSize,username);
                break;
            case 2:
                songQueueOptions(&playlist, &playlistSize, &front, &back, &dequeSize);
                break;
            case 3:
                startQueue(&front, &back, &dequeSize);
                break;
            case 4:
                showList(&songDB);
                printf(BGRN"Ingrese nombre del cancion que quiere reproducir: "reset);
                gets(buff);
                printf(BHGRN "%s\n" reset, buff); 
                fflush(stdin);
                if(strlen(buff)>64) break;
                id = searchUser(&songDB, &dbSize, buff);
                if(id == -1){
                    printf(BRED"La cancion no existe\n"reset);
                    getchar();
                    fflush(stdin);
                    break;
                }else{
                    printf(BRED"Cancion encontrada, pulse enter\n"reset);
                    getchar();
                    fflush(stdin);
                    strcpy(buff,strcat(buff,".mp3\""));
                    playSong(buff);
                }
                clearScreen();
                break;
            case 5:
                randomPlaylist(&randomS,&randomSize,&songDB,&dbSize);
                break;
            case 6:
                showList(&songDB);
                break;
            case 7:
                exit(-1);
                break;
            default:
                printf(BRED"Error: Opcion invalida\n"reset);
                break;
        }
    }
}