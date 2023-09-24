enum boolean push(struct node **h, struct node **t,int *cont, int id, short section, float price, char name[50]){
    clearScreen();
    if(*cont == TAM){
        printf("FILA VIRTUAL LLENA!\n\n");
        getchar();
        return false;     
    } else{
        struct node *tmp = (struct node *)calloc(1,sizeof(struct node));
        strcpy(tmp->name,name);
        tmp->id = id;
        tmp->price = price;
        tmp->next = *h;
        tmp->section = section;

        if(*t == NULL && *h == NULL){
            *h = tmp;
            *t = tmp;
            *cont = 1;
        } else{
            (*t)->next = tmp;
            *t = tmp;
            (*cont) +=1;
        }
    }
    
    fflush(stdin);
    getchar();
    return true;
}