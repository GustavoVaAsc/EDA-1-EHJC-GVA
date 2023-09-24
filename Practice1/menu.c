void menu(){
    #ifdef _WIN32
        char SO = 'W';
    #endif

    #ifdef __APPLE__
        char SO = 'U';
    #endif

    short int choice;
    while(1){
        if(SO == 'W'){
            system("cls");
        }else if(SO == 'U'){
            system("clear");
        }
        fflush(stdin);
        printf("Presione ENTER para Iniciar/Continuar \n");
        getchar();
        printf("------------ PAIN CLOTHING MENU ------------\n\n");

        printf("Bienvenidx usuarix, seleccione la opci%cn deseada pulsando el n%cmero deseado: \n\n",162,163);

        printf("1: Mostrar productos del carrito\n");
        printf("2: Agregar productos al carrito\n");
        printf("3: Eliminar producto del carrito\n");
        printf("4: Efectuar compra e imprimir el ticket\n");
        printf("5: Salir\n\n");

        scanf("%hi",&choice);
        switch(choice){
            case 1:
                //Show products
                if(SO == 'W'){
                    system("cls");
                }else if(SO == 'U'){
                    system("clear");
                }
                fflush(stdin);
                showProducts();
                break;
            case 2:
                //Add products
                if(SO == 'W'){
                    system("cls");
                }else if(SO == 'U'){
                    system("clear");
                }
                fflush(stdin);
                add_product();
                break;
            case 3:
                //Delete products
                if(SO == 'W'){
                    system("cls");
                }else if(SO == 'U'){
                    system("clear");
                }
                fflush(stdin);
                delete_product();
                break;
            case 4:
                //Print ticket
                if(SO == 'W'){
                    system("cls");
                }else if(SO == 'U'){
                    system("clear");
                }
                fflush(stdin);
                printTicket();
                break;
            case 5:
                if(SO == 'W'){
                    system("cls");
                }else if(SO == 'U'){
                    system("clear");
                }
                fflush(stdin);
                if(checkProducts()==0){
                    break;
                }else{
                    return; //Breaks any loop and the function
                } 
            default: //Default should be on the bottom of a switch-case condition
                printf("No option");//No option
                break;
        }
    }
}