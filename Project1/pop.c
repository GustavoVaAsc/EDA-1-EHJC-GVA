struct stackNode *pop(struct stackNode **stack, int *cont){
   if(*stack == NULL){
        return NULL;
   }else{
        struct stackNode *tmp = *stack;
        *stack = tmp->prev;
        tmp->prev = NULL;
        (*cont)--;   

        return tmp;
   }

}