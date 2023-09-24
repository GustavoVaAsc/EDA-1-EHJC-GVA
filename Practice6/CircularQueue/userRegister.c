enum boolean userRegister(struct node **h, struct node **t, int *c){
    char name[50];
    static int id = 1;
    short sect;
    float p;
    if(*c == TAM){
        printf("FILA VIRTUAL LLENA!!\n");
        getchar();
        fflush(stdin);
        return false;
    }

    printf("Ingrese su nombre: \n");
    scanf("%s", name);
    fflush(stdin);
    clearScreen();

    printf("Ingrese la seccion: \n");
    printf("1: VIP\n2: Diamante\n3: Platino\n4: Oro\n5: Plata A\n6: Plata B\n7:Plata C\n8: Plata D\n9: General A\n10: GeneralB\n");
    scanf("%hd", &sect);
    fflush(stdin);
    if(sect < 1 || sect > 10) return false;
    clearScreen();

    printf("Ingrese el total a pagar: ");
    scanf("%f",&p);
    fflush(stdin);
    if(p <= 0) return false;
    clearScreen();

    push(h,t,c,id,sect,p,name);
    id++;
    return true;
}