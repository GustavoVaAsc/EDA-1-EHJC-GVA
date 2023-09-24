enum boolean inputData(struct node **h, struct node **t, int *cHead, int *cTail){
    char name[50];
    static int id = 1;
    int amount;
    float p;
    if(*cHead+*cTail > 2*TAM){
        printf("No queda espacio en las filas!\n");
        getchar();
        fflush(stdin);
        return false;
    }

    printf("Ingrese su nombre: \n");
    scanf("%s", name);
    fflush(stdin);
    clearScreen();

    printf("Ingrese la cantidad de articulos: \n");
    scanf("%d", &amount);
    fflush(stdin);
    if(amount < 1) return false;
    clearScreen();

    printf("Ingrese el total a pagar: ");
    scanf("%f",&p);
    fflush(stdin);
    if(p <= 0) return false;
    clearScreen();

    if(amount > 20){
        if(push_back(h,t,cHead,cTail, id, amount, p, name)==true){
            id++;
        }
        getchar();
        fflush(stdin);
    }else{
        if(push_front(h,t,cHead,cTail, id, amount, p, name)==true){
            id++;
        }
        getchar();
        fflush(stdin);
    }
    return true;
}