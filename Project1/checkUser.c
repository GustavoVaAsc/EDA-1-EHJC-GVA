enum boolean checkUser(struct hashTable *ht, const char *username){
    int index = hash(username);
    while(ht->table[index].username != NULL){
        if(strcmp(ht->table[index].username, username) == 0){
            return true; 
        }
        index = (index + 1) % MAX_TABLE_SIZE;
    }

    return false; 
}