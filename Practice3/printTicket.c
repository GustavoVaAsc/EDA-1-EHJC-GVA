void printTicket(struct node shop[TAM]){
    static short int cont = 64;
    cont++;
    char name[15]={"Ticket0.txt"};
    name[6] = cont;
    FILE *out = fopen(name, "w");
    int i = 0;
    float totalPrice = 0;
    fputs("----------------- PAIN CLOTHING -------------- \n\n",out);
    fputs("Producto\t Cantidad\t Precio\n\n",out);
    for(i = 0; i<TAM; i++){
        if(shop[i].cart> 0){
            fprintf(out,"%s --------- %d -------- $ %.2f\n",(shop[i].name),(shop[i].cart),(shop[i].cart)*shop[i].price*(0.80));
            totalPrice = totalPrice + shop[i].cart * shop[i].price *(0.80);
        }
    }
    fprintf(out,"\nPRECIO TOTAL ----------------- $ %.2f\n\n",totalPrice);
    fputs("------------ GRACIAS POR SU COMPRA! ------------",out);
    fclose(out);
    for(i = 0; i<TAM; i++){
        shop[i].cart = 0;
    }
}