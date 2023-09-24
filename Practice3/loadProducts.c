enum boolean loadProducts(struct node shop[TAM]){
    FILE* f;
    short i;
    f=fopen("db.txt","r");
    if(f!=NULL){
        for(i=0; i<TAM; i++){
            fscanf(f, "%s %f %d %d",shop[i].name, &shop[i].price, &shop[i].stock, &shop[i].cart);
        }
        fclose(f);
        return true;
    }
    return false;
}
