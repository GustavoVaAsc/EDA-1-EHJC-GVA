void printTable(struct hashTable *ht) {
    printf("Hash Table:\n");
    for (int i = 0; i < MAX_TABLE_SIZE; i++) {
        if (ht->table[i].username != NULL) {
            printf("%d: %s:%s\n", i, ht->table[i].username, ht->table[i].password);
        }
    }
}