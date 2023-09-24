#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 4

enum boolean {false, true};

struct node{
    int id;
    char name[50];
    int articles;
    float price;
    struct node *prev;
    struct node *next;
};

#include "clearScreen.c"
#include "pop_front.c"
#include "pop_back.c"
#include "push_front.c"
#include "push_back.c"
#include "inputData.c"
#include "show.c"
#include "intro.c"
#include "menu.c"

int main(){
    menu();
    return 0;
}