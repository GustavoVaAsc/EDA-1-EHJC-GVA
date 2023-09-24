#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifdef _WIN32
    #include <Windows.h>
#endif

#ifdef __unix__
    #include <unistd.h>
#endif

#ifdef __APPLE__
    #include <unistd.h>
#endif

enum boolean {false,true};

struct node{
    char name[30];
    int id;
    struct node* next;
};

#include "clearScreen.c"
#include "show.c"
#include "listSort.c"
#include "search.c"
#include "delete.c"
#include "duckDuckGoose.c"
//#include "deleteTask.c"
#include "insert.c"
#include "createList.c"
#include "menu.c"


int main(){
    menu();
    return 0;
}