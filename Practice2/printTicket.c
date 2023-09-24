void printTicket(char *products[], float price[], int stockUser[2][8],int *ap){
    static short int cont = 64;
    cont++;
    char name[15]={"Ticket0.txt"};
    name[6] = cont;
    FILE *out = fopen(name, "w");
    int i = 0;
    float totalPrice = 0;
    fputs("----------------- PAIN CLOTHING -------------- \n\n",out);
    fputs("Producto\t Cantidad\t Precio\n\n",out);
    for(i = 0; i<8; i++){
        if(*(ap+(8+i)) > 0){
            fprintf(out,"%s --------- %d -------- $ %.2f\n",*(products+i),*(ap+(8+i)),(*(ap+(8+i))* *(price+i))*(0.80));
            totalPrice = totalPrice + ((*(ap+(8+i))* *(price+i))*(0.80));
        }
    }
    fprintf(out,"\nPRECIO TOTAL ----------------- $ %.2f\n\n",totalPrice);
    fputs("------------ GRACIAS POR SU COMPRA! ------------",out);
    for(i = 0; i<8; i++){
        *(ap+(8+i)) = 0;
    }
}