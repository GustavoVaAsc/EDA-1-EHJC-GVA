/*

    Analysis:

    Node modeling (For the struct of the products):
        -Name
        -Price
        -Amount(Cart): Array of integers {0,0,0,0,0,0, ... ,0n}


    Examples for other model-types:
        -Costs
        -Nation

    Stock: Array of nodes {0,1,2,3,4,5,6, ... ,n}

*/

#include <stdio.h>
#include <stdlib.h>

#define TAM 8

struct node{ //Size of struct node: 44 bytes
    char name[50];
    float price; 
    int stock, cart;
};

enum boolean {false, true};

#include "loadProducts.c"
#include "menuOp.c"
#include "validateDataBase.c"
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