void menu(){
    //VARIABLE DECLARATION
    char *products[] = {"Camisa","Pantalones","Vestido","Zapatos","Chamarra","Calcetines","Falda","Medias"};

    float price[] = {250.00, 350.00, 275.00, 515.00, 400.00, 80.00, 170.00, 100.00};

    int stockUser[2][8] = {{150,100,115,55,70,200,95,175},{0,0,0,0,0,0,0,0}};

    int *ap=*stockUser;

    short int choice;

    //Function start
    while(1){
        clearScreen();
        menuOp();
        scanf("%hi",&choice);
        fflush(stdin);
        switch(choice){
            case 1:
                //Show products
                clearScreen();
                fflush(stdin);
                showProducts(products,price,stockUser,ap);
                break;
            case 2:
                //Add products
                clearScreen();
                fflush(stdin);
                add_product(products,price,stockUser,ap);
                break;
            case 3:
                //Delete products
                clearScreen();
                fflush(stdin);
                delete_product(products,price,stockUser,ap);
                break;
            case 4:
                //Print ticket
                clearScreen();
                fflush(stdin);
                printTicket(products,price,stockUser,ap);
                break;
            case 5:
                clearScreen();
                fflush(stdin);
                if(checkProducts(products,price,stockUser,ap)==0){
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