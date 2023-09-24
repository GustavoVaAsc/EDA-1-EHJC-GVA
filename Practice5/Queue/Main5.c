#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 7

enum boolean {false, true};

struct node{
    int id;
    float price, distance;
    char name[20];
    char shop[30];
    struct node *next;
};

#include "clearScreen.c"
#include "intro.c"
#include "show.c"
#include "enqueue.c"
#include "dequeue.c"
#include "cappi.c"

int main(){
    cappi();
    return 0;
}