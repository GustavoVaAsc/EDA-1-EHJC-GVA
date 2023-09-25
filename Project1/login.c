enum boolean login(){
    FILE *accounts = fopen("accounts.txt", "r");
    if(accounts == NULL){
        printf("No hay cuentas registradas en la base de datos \n");
        getchar();
        fflush(stdin);
        return false;
    }else{
        struct hashTable registry;
        initializeTable(&registry);
        char line[100];
        //Se carga el registro desde el archivo
        while(fgets(line, sizeof(line)-1, accounts)){
            line[strcspn(line, "\n")] = '\0'; 
            char *username = strtok(line, ",");
            char *password = strtok(NULL, ",");
            addEntry(&registry,username, password);
        }
        char loginUsername[32];
        char loginPassword[32];
        printf(BGRN"Nombre de usuario: "reset);
        scanf("%s", loginUsername);
        fflush(stdin);
        printf(BGRN"Clave de acceso: "reset);
        scanf("%s", loginPassword);
        fflush(stdin);

        if(findEntry(&registry, loginUsername, loginPassword)==0){
            do{
                printf(BRED"EL usuario o clave no son correctos %s \n", loginUsername);
                printf(BGRN"Nombre de usuario: "reset);
                scanf("%s", loginUsername);
                fflush(stdin);
                printf(BGRN"Clave de acceso: "reset);
                scanf("%s", loginPassword);
                fflush(stdin);
            }while(findEntry(&registry, loginUsername, loginPassword)==0);
        }
        clearScreen();
        menu(loginUsername);
        fclose(accounts);
        //printTable(&registry);
    }
}