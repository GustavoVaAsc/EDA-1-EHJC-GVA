enum boolean push_back(struct node **h, struct node **t, int *cHead, int *cTail, int id, int a, float p, char n[50]){

    if(*t != NULL && *cTail == TAM){
        printf("No hay espacio en la fila, intente mas tarde... \n\n");
        getchar();
        fflush(stdin);
        return false;     
    }else{
        struct node *tmp = (struct node *)calloc(1,sizeof(struct node));
        tmp->id = id;
        tmp->articles = a;
        tmp->price = p;
        strcpy(tmp->name,n);
        tmp->next = NULL;
        tmp->prev = NULL;
        if(*t == NULL && *h == NULL){
            *h = tmp;
            *t = tmp;
            *cTail = 1;
            *cHead = TAM;
            printf("Ingresado a la fila normal con exito!!");
            getchar();
            fflush(stdin);
        } else{
            (*t)->next = tmp;
            tmp->prev = *t;
            *t = tmp;
            (*cTail) +=1;
            printf("Ingresado a la fila normal con exito!!");
            getchar();
            fflush(stdin);
        }
    }

    return true;
}