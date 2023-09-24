enum boolean createList(struct node **h){
    clearScreen();
    char name[30];
    static int id = 1;

    printf("Ingrese el nombre del participante: \n");
    scanf("%s",name);
    fflush(stdin);
    insert(h,name,id);
    listSort(h);
}