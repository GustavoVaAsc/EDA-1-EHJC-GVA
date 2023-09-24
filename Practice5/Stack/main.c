#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 5

enum boolean {false, true};

struct node{
    char visual[10];
    int num;
    int cont;
    struct node *prev;
};


#include "clearScreen.c"
#include "pop.c"
#include "show.c"
#include "push.c"
#include "createHanoi.c"
#include "moveTop.c"
#include "topSwap.c"
#include "isSorted.c"
#include "intro.c"
#include "game.c"


int main(){
    game();
    return 0;
}