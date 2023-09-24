void show(struct node **h){
    struct node *it = *h;
    if(*h == NULL){
        printf("\nNo hay participantes registrados!\n");
        fflush(stdin);
        getchar();
        return;
    } else {
        struct node *tmp = *h;
        do {
            printf("Participante no %d: %s\n",it->id,it->name);
            it = it->next;
        }while (it != *h);
        getchar();
        fflush(stdin);
    }
}