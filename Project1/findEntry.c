enum boolean findEntry(struct hashTable *ht, const char *username, const char *password){
    int index = hash(username);
    while(ht->table[index].username != NULL){
        if(strcmp(ht->table[index].username, username) == 0 && strcmp(ht->table[index].password, password) == 0){
            return true;
        }
        index = (index + 1) % MAX_TABLE_SIZE;
    }

    return false;
}