enum boolean unregister(struct node **h, int id){
    if(*h == NULL){
        printf("No hay personas registradas! \n");
        getchar();
        fflush(stdin);
        clearScreen();
        return false;
    }else{
        struct node *tmp = *h;
        struct node *prev = NULL;
        if((*h)->id == id){
            if ((*h)->next != *h) {
                struct node *tmp = *h;
                while (tmp->next != *h) {
                    tmp = tmp->next;
                }
                *h = (*h)->next;
                tmp->next = *h;
            }else{ 
                free(*h);
                *h = NULL;
            }
            printf("Participante eliminado!\n");
            getchar();
            fflush(stdin);
            return true;
        }else{
            struct node *prev = *h, *tmp2 = (*h)->next;
            while (tmp2 != *h) {
                if (tmp2->id == id) {
                    if (tmp2->next == *h) {
                        prev->next = *h;
                    }
                    prev->next = tmp2->next;
                    free(tmp2);
                    printf("Participante eliminado!\n");
                    getchar();
                    fflush(stdin);
                    listSort(h);
                    return true;
                }
                prev = tmp2;
                tmp2 = tmp2->next;
                listSort(h);
            }

            if(tmp2 == *h){
                printf("El participante a eliminar no se encuentra en la lista\n");
                fflush(stdin);
                getchar();
                return false;
            }
        }
    }
}