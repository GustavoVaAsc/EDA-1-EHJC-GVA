enum boolean deleteEntry(struct hashTable *ht, const char *username){
    int index = hash(username);

    while(ht->table[index].username != NULL){
        if(strcmp(ht->table[index].username, username) == 0){
            ht->table[index].is_deleted = 1;
            ht->num_entries--;
            return true; 
        }
        index = (index + 1) % MAX_TABLE_SIZE;
    }

    return false;
}
