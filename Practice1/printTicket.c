void printTicket(){
    static short int cont = 64;
    cont++;
    char name[15]={"Ticket0.txt"};
    name[6] = cont;
    FILE *out = fopen(name, "w");
    int i = 0;
    float totalPrice = 0;
    fputs("----------------- PAIN CLOTHING -------------- \n\n",out);
    fflush(out);
    fputs("Producto\t Cantidad\t Precio\n\n",out);
    fflush(out);
    for(i = 0; i<8; i++){
        fflush(out);
        if(stockUser[1][i] > 0){
            fflush(out);
            fprintf(out,"%s --------- %d -------- $ %.2f\n",products[i],stockUser[1][i],(stockUser[1][i]*price[i])*(0.80));
            totalPrice = totalPrice + ((stockUser[1][i]*price[i])*(0.80));
        }
    }
    fflush(out);
    fprintf(out,"\nPRECIO TOTAL ----------------- $ %.2f\n\n",totalPrice);
    fflush(out);
    fputs("------------ GRACIAS POR SU COMPRA! ------------",out);
    fflush(out);
    fclose(out);
    for(i = 0; i<8; i++){
        stockUser[1][i] = 0;
    }
}