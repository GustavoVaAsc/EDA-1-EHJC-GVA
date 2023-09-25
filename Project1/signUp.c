enum boolean signUp(){
    FILE *accounts = fopen("accounts.txt", "rw");
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

        char signUsername[32];
        char signPassword[32];
        char confirmPassword[32];
        printf(BHWHT"El nombre de usuario y la clave no pueden superar los 32 caracteres \n\n"reset);
        printf(BGRN"Nombre de usuario: "reset);
        scanf("%s", signUsername);
        fflush(stdin);
        printf(BGRN"Clave de acceso: "reset);
        scanf("%s", signPassword);
        fflush(stdin);
        printf(BGRN"Confirma la clave: "reset);
        scanf("%s", confirmPassword);
        fflush(stdin);

        if(checkUser(&registry, signUsername)==1){
            do{
                printf(BRED"El nombre de usuario ya esta en uso %s \n", signUsername);
                printf(BGRN"Nombre de usuario: "reset);
                scanf("%s", signUsername);
                fflush(stdin);
                printf(BGRN"Clave de acceso: "reset);
                scanf("%s", signPassword);
                fflush(stdin);
                printf(BGRN"Confirma la clave: "reset);
                scanf("%s", confirmPassword);
                fflush(stdin);
            }while(checkUser(&registry, signUsername)==1);
            if(strcmp(signPassword, confirmPassword)){
                do{
                    printf(BRED"Las claves no coinciden %s \n", signUsername);
                    fflush(stdin);
                    printf(BGRN"Clave de acceso: "reset);
                    scanf("%s", signPassword);
                    fflush(stdin);
                    printf(BGRN"Confirma la clave: "reset);
                    scanf("%s", confirmPassword);
                    fflush(stdin);
                }while(strcmp(signPassword, confirmPassword));
            }

        }else if(strcmp(signPassword, confirmPassword)){
            do{
                printf(BRED"Las claves no coinciden %s \n", signUsername);
                fflush(stdin);
                printf(BGRN"Clave de acceso: "reset);
                scanf("%s", signPassword);
                fflush(stdin);
                printf(BGRN"Confirma la clave: "reset);
                scanf("%s", confirmPassword);
                fflush(stdin);
            }while(strcmp(signPassword, confirmPassword));
        }
        addEntry(&registry, signUsername, signPassword);
        printTable(&registry);
        fclose(accounts);
        saveState(&registry);
        return true;
    }
}