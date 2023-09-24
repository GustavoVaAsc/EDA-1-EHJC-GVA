#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum boolean {false, true};

struct node{
    int id;
    char name[64];
    short atk;
    short def;
    short health;
    struct node *next;
    struct node *prev;
};

#include "clearScreen.c"
#include "delete.c"
#include "searchID.c"
#include "searchUser.c"
#include "show.c"
#include "insert.c"
#include "createTeam.c"
#include "readDB.c"
#include "menu.c"

int main(){
    menu();
    return 0;
}