int hash(const char *str){
    int hash = 0;
    for (int i = 0; i < strlen(str); i++){
        hash += str[i];
    }
    return hash % MAX_TABLE_SIZE;
}