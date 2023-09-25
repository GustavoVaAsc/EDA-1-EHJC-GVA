enum boolean randomPlaylist(struct stackNode **stack,int *stackSize,struct dllNode **db,int *dbSize){
    int random = 0;
    int id;
    char *songName;
    char *artistName;
    char *genre;
    char *duration;
    for(int i = 0; i < 7; i++){
        random = rand() % 100;
        struct dllNode *newNode = searchID(db,dbSize,random);
        if(newNode == NULL){
            random = rand() % 100;
            newNode = searchID(db,dbSize,random);
        }
        songName = strdup(newNode->songName);
        artistName = strdup(newNode->artistName);
        genre = strdup(newNode->genre);
        duration = strdup(newNode->duration);
        id = newNode->id;
        push(stack,stackSize,id,songName,artistName,genre,duration);
    }

    struct stackNode *it = *stack;
    for(int i = 0; i < 7; i++){
        printf("En reproduccion: %s \n",it->songName);
        printf(BHWHT"Si la cancion termino o usted cierra el reproductor, pulse enter\n");
        //playSong(buffer);
        getchar();
        fflush(stdin);
        it = it->prev;
        pop(stack,stackSize);
        clearScreen();
    }
}