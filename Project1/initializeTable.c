enum boolean initializeTable(struct hashTable *ht){
    for (int i = 0; i < MAX_TABLE_SIZE; i++){
        ht->table[i].username = NULL;
        ht->table[i].password = NULL;
        ht->table[i].is_deleted = 0;
    }
    ht->num_entries = 0;
    return true;
}