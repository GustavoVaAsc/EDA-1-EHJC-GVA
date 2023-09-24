#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum boolean {false, true};

struct node{
    int id;
    char *character;
    char *type;
    char *tier;
    char *power;
    struct node *prev;
    struct node *next;
};

#include "clearScreen.c"
#include "searchID.c"
#include "searchUser.c"
#include "delete.c"
#include "deleteAll.c"
#include "insert.c"
#include "showListReverse.c"
#include "showList.c"
#include "readDatabase.c"
#include "menu.c"

int main(){
    menu();
    return 0;
}