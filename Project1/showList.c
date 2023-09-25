void showList(struct dllNode **list){
    struct dllNode *it = *list;
    if(it == NULL){
        printf(BRED"No hay elementos en tu playlist\n"reset);
        getchar();
        fflush(stdin);
        return;
    }
    printf(BGRN"ID  Nombre\tArtista\tGenero\tDuracion\n\n");
    while (it != NULL) {
        fflush(stdout);
        printf("%d: %s ---- %s ---- %s  ---- %s\n",it->id,it->songName,it->artistName,it->genre,it->duration);
        it = it->next;
    }
     printf("\n\nPulse enter para continuar...\n");
    printf("\n"reset);
    getchar();
    fflush(stdin);
}