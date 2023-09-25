enum boolean startQueue(struct dllNode **head, struct dllNode **tail, int *qsize){
    struct dllNode *it = *tail;
    char *buffer;
    short choice = 0;
    
    while(*head != NULL && *tail !=NULL){
        buffer = strdup(it->songName);
        strcat(buffer,".mp3");
        printf(BHWHT"Ahora suena: %s"reset,it->songName);
        printf(BHWHT"Si la cancion termino o usted cierra el reproductor, pulse enter\n");
        //playSong(buffer);
        getchar();
        fflush(stdin);
        it = it->next;
        printf(BGRN"Cancion terminada! \n");
        printf(BGRN"Elija una opcion: \n");
        printf(BHWHT"1. Ir a la siguiente cancion\n");
        printf(BHWHT"2. Saltar la siguiente cancion\n");
        printf(BHWHT"3. Salir de la reproduccion\n");
        free(buffer);
        scanf("%hd",&choice);
        fflush(stdin);
        switch(choice){
            case 1:
                popBack(head,tail,qsize);
                break;
            case 2:
                popBack(head,tail,qsize);
                popBack(head,tail,qsize);
                break;
            case 3:
                popBack(head,tail,qsize);
                return true;
            default:
                printf(BHRED"Error\n");
                break;
        }
        clearScreen();
    }
    return true;
}