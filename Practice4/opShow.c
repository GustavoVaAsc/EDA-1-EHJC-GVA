void opShow(struct node shop[TAM]){
    int i;
    clearScreen();
    printf("Teclee el producto que desee agregar: \n\n");
    for(i=0; i<TAM; i++){
        printf("%i: %s\t Precio $ %.2f\t Stock: %i\n",i,shop[i].name,shop[i].price,shop[i].stock);
    }
    getchar();
    fflush(stdin);
    return;
}