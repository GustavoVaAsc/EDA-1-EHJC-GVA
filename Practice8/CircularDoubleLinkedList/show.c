void show(struct node **h){
    if(*h == NULL){
        printf("\nNo hay elementos en tu equipo!\n");
        fflush(stdin);
        getchar();
        return;
    }else {
        struct node *it = *h;
        do {
            fflush(stdout);
            printf("%d: %s ---- Ataque: %hd ---- Defensa: %hd  ---- Vida: %hd\n",it->id,it->name,it->atk,it->def,it->health);
            it = it->next;
        }while (it != *h);
        getchar();
        fflush(stdin);
        clearScreen();
    }
}