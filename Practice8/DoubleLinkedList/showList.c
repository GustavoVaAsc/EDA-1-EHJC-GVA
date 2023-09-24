void showList(struct node **list){
    struct node *it = *list;
    if(it == NULL){
        printf("No hay tazos en tu coleccion\n");
        getchar();
        fflush(stdin);
        return;
    }
    while (it != NULL) {
        fflush(stdout);
        printf("%d: %s ---- %s ---- %s  ---- %s\n",it->id,it->character,it->type,it->tier,it->power);
        it = it->next;
    }
    printf("\n\nPulse enter para continuar...\n");
    printf("\n");
    getchar();
    fflush(stdin);
}