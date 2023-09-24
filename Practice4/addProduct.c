enum boolean addProduct(struct node shop[TAM],struct item **cart){
    int id, cant;
    clearScreen();
    opShow(shop);
    printf("Teclea el id del producto que desees agregar: \n");
    scanf("%d", &id);
    fflush(stdin);
    if (id<0 || id>=8) {
        return false;
    }

    printf("Teclea la cantidad de productos que desees agregar: \n");
    scanf("%d", &cant);
    fflush(stdin);

    if(cant > shop[id].stock || cant <=0){
        printf("Entrada incorrecta \n");
        getchar();
        fflush(stdin);
        return false;
    }

    if(*cart == NULL){ //First case
        //cart -> id1 -> id2 -> id3
        struct item *it = (struct item *)calloc(1,sizeof(struct item));
        it->id=id; //Iterator accesses to id on the new struct created and equals to the funct. id
        it->cant=cant; //Iterator accesses to cant on the new struct created and equals to the funct. cant
        it->next = NULL; //Iterator accesses to the pointer next of the node and sets to NULL
        *cart = it; //Cart pointer now is equal to iterator (so this case never happens until we delete all products)
        shop[it->id].stock -= cant;
    }else{
        struct item *res = binarySearch(*cart,id); //Second case
        if(res != NULL){ //After the search res is set to a memory allocation
            res->cant += cant; //res accesses to cant and sets new cant
            shop[res->id].stock -= cant;
        }else{ //Third case
            struct item *it2 = (struct item *)calloc(1,sizeof(struct item)); //Allocation of a new node
            it2->id=id;
            it2->cant = cant;
            it2->next = *cart;
            *cart = it2;
            shop[it2->id].stock -= cant;
        }
    }

    printf("Productos agregados exitosamente! \n");
    getchar();
    fflush(stdin);

    return true;

}