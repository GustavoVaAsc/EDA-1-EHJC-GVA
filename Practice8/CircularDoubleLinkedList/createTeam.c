enum boolean createTeam(struct node **chlist, int *chsize, struct node **team, int *teamsize){
    struct node *it = *chlist;
    short choice = 0;    
    while(*teamsize != 4){
        printf("Selecciona un personaje!\n\n");
        printf("Personaje: %s\n\n",it->name);
        printf("Estadisticas:\n\n");
        printf("Ataque: %hd\n",it->atk);
        printf("Defensa: %hd\n",it->def);
        printf("Vida: %hd\n\n",it->health);
        printf("1: Personaje anterior\n");
        printf("2: Personaje siguiente\n");
        printf("3: Agregar al equipo\n\n");
        
        scanf("%hd",&choice);
        fflush(stdin);
        if(choice < 1 || choice > 3){
            printf("Opcion invalida!\n\n");
        }

        if(choice == 1){
            it = it->prev;
        }
        else if(choice == 2){
            it = it->next;
        }
        else if(choice == 3){
            insert(team,teamsize,it);
        }
    }
    return true;
}
