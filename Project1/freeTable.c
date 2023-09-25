void freeTable(struct hashTable *ht) {
    for (int i = 0; i < MAX_TABLE_SIZE; i++) {
        if (ht->table[i].username != NULL) {
            free(ht->table[i].username);
            free(ht->table[i].password);
        }
    }
}