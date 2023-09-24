enum boolean push(struct node **stack, int *cont, int data, char v[10]){
    if(*cont == TAM) return false;

    struct node *tmp = (struct node *) calloc(1,sizeof(struct node));
    tmp->num = data;
    tmp->prev = *stack;
    strcpy(tmp->visual,v);
    *stack = tmp;
    cont++;
    return true;
}

/*


    **
   ****
  ******
 ********
**********

*/