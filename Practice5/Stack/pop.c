struct node *pop(struct node **stack, int *cont){
   if(*stack == NULL){
        return NULL;
   }else{
        struct node *tmp = *stack;
        tmp->num = 0;
        *stack = tmp->prev;
        tmp->prev = NULL;
        (*cont)--;   

        return tmp;
   }

}