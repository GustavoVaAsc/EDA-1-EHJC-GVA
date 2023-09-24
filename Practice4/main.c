/*

ABC (Spanish)
-Alta
-Baja
-Cambios

CRUD Platform (English)
-Creation
-Recalling
-Update
-Deletion

Check cases:

1: Is empty
Cart -> NULL?

2: No elements
-Cart != NULL && search(id)
-search returns NULL

*Elements in the cart, which the searched id isn't in the cart*

-If we insert the element at the end of the struct, insertion will be constant O(1)
-Search will be O (n/2) (Linear divided by 2)
-If the insertion is sorted then apply binary search (Log n)

3: When the id is already on the cart
-Cart !=NULL && search (id)
-search returns a memory address (The address which contains the product)
address->cant+=cant;

-Code notes-

Cart is the reference.
MID POINT OF THE LINKED LISTS: n/2 (Linear)

--SEARCH FUNCTION--

id

Cases:

1: Is empty? -> returns NULL
2: The element don't exists -> returns NULL
3: The element exists -> returns ap (memory address)

*/

#include <stdio.h>
#include <stdlib.h>

#define TAM 8

struct node{
    char name[50];
    float price;
    int stock;
};

struct item{
    int id, cant;
    struct item *next;
};

enum boolean {false,true};

#include "binarySearch.c"
#include "clearScreen.c"
#include "loadProducts.c"
#include "menuOp.c"
#include "validateDataBase.c"
#include "opShow.c"
#include "showProducts.c"
#include "addProduct.c"
#include "deleteProducts.c"
#include "printTicket.c"
#include "checkProducts.c" 
#include "menu.c"

int main(){
    menu();
    return 0;
}