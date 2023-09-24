enum boolean push_front(struct node **h, struct node **t, int *cHead, int *cTail, int id, int a, float p, char n[50]){

    if(*h != NULL && *cHead == TAM){
        printf("No hay espacio en la fila, intente mas tarde... \n\n");
        getchar();
        fflush(stdin);
        return false;     
    } else{
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
            *cTail = 0;
            *cHead = TAM;
            printf("Ingresado a la unifila con exito!!");
            getchar();
            fflush(stdin);
        } else{
            (*h)->prev = tmp;
            tmp->next = *h;
            *h = tmp;
            (*cHead) +=1;
            printf("Ingresado a la unifila con exito!!");
            getchar();
            fflush(stdin);
        }
    }

    return true;
}