enum boolean addEntry(struct hashTable *ht, const char *username, const char *password){
    if (ht->num_entries >= MAX_TABLE_SIZE){
        return false; 
    }

    int index = hash(username);

    while (ht->table[index].username != NULL && !ht->table[index].is_deleted){
        if (strcmp(ht->table[index].username, username) == 0){
            printf("Error en la base de datos cargada!\n\nFinalizando programa...\n");
            exit(-1);
            //return false;
        }
        index = (index + 1) % MAX_TABLE_SIZE;
    }

    ht->table[index].username = strdup(username);
    ht->table[index].password = strdup(password);
    ht->table[index].is_deleted = 0;

    ht->num_entries++;
    return true;
}