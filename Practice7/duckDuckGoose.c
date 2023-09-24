enum boolean duckDuckGoose(struct node **h){
    if(*h == NULL){
        printf("El juego no tiene participantes porque no ha iniciado o acaba de terminar!\n");
        getchar();
        fflush(stdin);
        return false;
    }
    int cnt = 0;
    struct node *it = *h;
    do{
        cnt++;
        it = it->next;
    }while (it != *h);
    if(cnt == 2){
        int rngU = rand()%2;
        struct node *w = search(h,rngU);
        printf("El ganador es: %s\n", w->name);
        getchar();
        fflush(stdin);
        unregister(h,1);
        unregister(h,2);
        return true;
    }

    int rng1 = 0, rng2 = 0;
    do{
        rng1 = rand()%cnt;
        rng2 = rand()%cnt;
    }while(rng1 == rng2 || rng1 == 0 || rng2 == 0);

    it = *h;
    int exec = 0;
    do{
        clearScreen();
        printf("Exec: %d\n",exec);
        getchar();
        fflush(stdin);
        if(rng1 == it->id){
            printf("                 GANSO!           ");
            getchar();
            fflush(stdin);
            exec++;
            if(exec == 2) break;
        }
        printf("                 PATO...             ");
        Sleep(2000);
        it= it->next;
        clearScreen();
    }while(it != *h && exec <=2); 
    printf("Los jugadores %d y %d han sido seleccionados!\n",rng1,rng2);
    getchar();
    fflush(stdin);
    struct node *tmp1 = search(h,rng1);
    struct node *tmp2 = search(h,rng2);

    int rng3 = rand()%2;
    if(rng3 == 1){
        unregister(h,rng1);
        printf("El jugador %d, %s ha sido eliminado!\n",rng1,tmp1->name);
        getchar();
        fflush(stdin);
    }else{
        unregister(h,rng2);
        printf("El jugador %d, %s ha sido eliminado!\n",rng2,tmp2->name);
        getchar();
        fflush(stdin);
    }
    clearScreen();

}