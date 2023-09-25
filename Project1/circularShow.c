void circularShow(struct dllNode **h){
    if(*h == NULL){
        printf(BRED"\nNo hay elementos en la cola!\n"reset);
        fflush(stdin);
        getchar();
        return;
    }else {
        printf(BGRN"ID  Nombre\tArtista\tGenero\tDuracion\n\n");
        struct dllNode *it = *h;
        do {
            fflush(stdout);
            printf("%d: %s ---- %s ---- %s  ---- %s\n",it->id,it->songName,it->artistName,it->genre,it->duration);
            it = it->next;
        }while (it != *h);
        getchar();
        fflush(stdin);
        clearScreen();
    }
}