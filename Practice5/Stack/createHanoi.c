enum boolean createHanoi(struct node **stack, int *cont){
    char insert[10] = {"AAAAAAAAAA"};
    for(int i=5; i>0; i--){
        int cnt = 0;
            for(int k=0; k<(10-(i*2))/2; k++){
                insert[cnt]=' ';
                cnt++;
            }
            for(int k=0; k<i*2; k++){
                insert[cnt]='*';
                cnt++;
            }
            for(int k=0; k<(10-(i*2))/2; k++){
                insert[cnt]=' ';
                cnt++;
            }
            insert[10]=' ';
            push(stack,cont,i,insert);
    }
    return true;
}