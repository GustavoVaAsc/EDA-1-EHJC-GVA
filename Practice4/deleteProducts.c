/*
--DELETE ANALYSIS--

Cases:

1: Cart is empty - ERROR

2: Element exists in the cart (Element found):
    Subcases
    2a: Is minor (Access cant)
    2b: Is greater (Error)
    2c: Is equal, so we delete the node (switch pointers)
        If we free a linked node, then all sequential nodes will be deleted

3: Element doesn't exist in the cart - ERROR

*/

enum boolean deleteProducts(struct node shop[TAM],struct item **cart){
    if(*cart == NULL){
        printf("No tienes productos! \n");
        return false;
    }else{
        int id, cant;
        showProducts(shop, *cart);
        printf("Teclea el id del producto que desees eliminar: \n");
        scanf("%d", &id);
        fflush(stdin);
        if(id == shop[id].stock && id <0){
            printf("Entrada incorrecta \n");
            getchar();
            fflush(stdin);
            return false;
        }
        //struct item *tmp = binarySearch2();

        struct item *tmp = *cart;
        struct item *prev = NULL;
        while(tmp != NULL){
            if(id == tmp->id){
                break;
            }
            prev = tmp;
            tmp = tmp->next;
        }
        
       
        if(tmp == NULL){
            printf("El elemento que buscaste no existe! \n");
            getchar();
            fflush(stdin);
            return false;
        }else{
            printf("Ingresa la cantidad de productos que deseas eliminar: \n");
            scanf("%d",&cant);
            fflush(stdin);
            if(cant > tmp->cant || cant <=0){
                printf("La cantidad ingresada no es valida\n");
                getchar();
                fflush(stdin);
                return false;
            }
            if(cant < tmp->cant){
                tmp->cant -= cant;
                shop[tmp->id].stock += cant;
                printf("Productos eliminados!\n");
                getchar();
                fflush(stdin);
                return true;
            }else{
                tmp->cant -= cant;
                shop[tmp->id].stock += cant;
                if(tmp->next == NULL && tmp == *cart){ //First case: The element only has a single item
                    free(tmp);
                    *cart = NULL;
                    prev = NULL;
                    printf("Productos eliminados!\n");
                    fflush(stdin);
                    getchar();
                    return true;
                }else if((tmp->next != NULL && tmp == *cart)) { //Second case: The element in deletion will be the first item
                    *cart = tmp->next;
                    prev = *cart;
                    free(tmp);
                    printf("Productos eliminados\n");
                    getchar();
                    fflush(stdin);
                    return true;
                }else if((tmp->next == NULL && tmp != *cart)) { //Third case: We want to delete the last item
                    prev->next = NULL;
                    free(tmp);
                    printf("Productos eliminados\n");
                    getchar();
                    fflush(stdin);
                    return true;
                }else if(tmp->next != NULL && prev->next == tmp){ //Fourth case: We want to delete an item between two
                    prev->next = tmp->next;
                    free(tmp);
                    printf("Productos eliminados\n");
                    getchar();
                    fflush(stdin);
                    return true;
                }
            }
        }
    }
    return true;
}