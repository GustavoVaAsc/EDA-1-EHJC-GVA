void menu(){
    //VARIABLE DECLARATION
    struct node shop[TAM];
    short int choice;
    struct item *cart = NULL;

    //Function start
    while(1){
        static enum boolean flag = false;
        clearScreen();
        if(flag == false){
            validateDataBase(shop);
            flag = true;
        }
        menuOp();
        scanf("%hi",&choice);
        fflush(stdin);
        switch(choice){
            case 1:
                //Show products
                clearScreen();
                fflush(stdin);
                showProducts(shop,cart);
                break;
            case 2:
                //Add products
                clearScreen();
                fflush(stdin);
                addProduct(shop,&cart);
                break;
            case 3:
                //Delete products
                clearScreen();
                fflush(stdin);
                deleteProducts(shop,&cart);
                break;
            case 4:
                //Print ticket
                clearScreen();
                fflush(stdin);
                printTicket(shop,&cart);
                break;
            case 5:
                clearScreen();
                fflush(stdin);
                if(checkProducts(cart)==false){
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