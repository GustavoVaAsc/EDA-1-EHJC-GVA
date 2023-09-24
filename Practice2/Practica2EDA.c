/*
Algorithm analysis:

Input: 
    Option (user)
    Amount (user)
    Products (Database): name (string), description (optional), price (float), stock (int)

Output:
    List of products 
    Text file: ticket
    cart: name, price, amount

Algorithm design:
    Option -> short -> var name: choice
    Amount -> short
    Products -> string array (Products pointer) / real array (price)
    Cart -> Amount of products, located in the second row of stockUser array

    OPERATION 2.0 --------- MAKE EVERYTHING A POINTER >:D
*/


#include <stdio.h>
#include <stdlib.h>

#include "menuOp.c"
#include "clearScreen.c"
#include "showProducts.c"
#include "add_product.c"
#include "delete_product.c"
#include "printTicket.c"
#include "checkProducts.c" 
#include "menu.c"


int main(){
    menu();
    return 0;
}
