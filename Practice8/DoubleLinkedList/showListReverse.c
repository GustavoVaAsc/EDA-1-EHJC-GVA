void showListReverse(struct node **list){
    struct node *it = *list;
    struct node *last = NULL;
    if(it == NULL){
        printf("No hay tazos en tu coleccion\n");
        getchar();
        fflush(stdin);
        return;
    }

    while (it->next != NULL) {
        it = it->next;
    }
    last = it; 
    printf("Ahora de reversa :D\n");
    while (last != NULL) {
        printf("%d: %s ---- %s ---- %s  ---- %s\n",last->id,last->character,last->type,last->tier,last->power);
        last = last->prev; 
    }
    printf("\n\nPulse enter para continuar...\n");
    printf("\n");
    getchar();
    fflush(stdin);
}
