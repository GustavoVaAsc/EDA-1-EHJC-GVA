enum boolean enqueue(struct node **h, struct node **t, int *cont){
    static int id = 0;
    char sTemp[30];
    float rTemp;
    if(*cont == MAX){
        printf("No se pueden tomar mas pedidos!!\n\n");
        getchar();
        fflush(stdin);
        return false;     
    } else{
        struct node *tmp = (struct node *)calloc(1,sizeof(struct node));
        printf("Ingresa el nombre del cliente: ");
        scanf("%s",sTemp);
        strcpy(tmp->name,sTemp);
        printf("Ingresa el establecimiento: ");
        scanf("%s",sTemp);
        strcpy(tmp->shop,sTemp);
        printf("Ingresa el precio de tu pedido: ");
        scanf("%f",&rTemp);
        tmp->price = rTemp;
        printf("Ingresa la distancia total en Km: ");
        scanf("%f",&rTemp);
        tmp->distance = rTemp;
        tmp->id = id;
        id++;
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
}


