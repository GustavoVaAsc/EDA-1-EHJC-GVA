enum boolean saveState(struct hashTable *ht){
    FILE *saveStateFile = fopen("accounts.txt", "w");
    if(saveStateFile == NULL){
        printf("Error!!\n");
        exit(-1);
    }
    for (int i = 0; i < MAX_TABLE_SIZE; i++) {
        if (ht->table[i].username != NULL) {
            fprintf(saveStateFile,"%s,%s\n", ht->table[i].username, ht->table[i].password);
        }
    }
    fclose(saveStateFile);
    return true;
}