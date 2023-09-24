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

#define TAM 4

enum boolean {false, true};

struct node{
    int id;
    char name[50];
    short section;
    float price;
    struct node *next;
};

#include "clearScreen.c"
#include "pop.c"
#include "push.c"
#include "userRegister.c"
#include "startQueue.c"
#include "show.c"
#include "intro.c"
#include "menu.c"

int main(){
    menu();
    return 0;
}