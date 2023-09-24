void menu(){
    //VARIABLE DECLARATION
    struct node shop[TAM];
    short int choice;

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
                showProducts(shop);
                break;
            case 2:
                //Add products
                clearScreen();
                fflush(stdin);
                add_product(shop);
                break;
            case 3:
                //Delete products
                clearScreen();
                fflush(stdin);
                delete_product(shop);
                break;
            case 4:
                //Print ticket
                clearScreen();
                fflush(stdin);
                printTicket(shop);
                break;
            case 5:
                clearScreen();
                fflush(stdin);
                if(checkProducts(shop)==false){
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