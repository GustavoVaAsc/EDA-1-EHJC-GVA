enum boolean loginSystem(){
    short choice;
    while(1){
        clearScreen();
        printf(BGRN"              Bienvenido a C-Potify            \n\n" );
        printf(BGRN"              1: Iniciar sesion\n");
        printf(BGRN"              2: Registrarse\n");
        printf(BGRN"              3: Salir\n\n" reset);
        scanf("%hd", &choice);
        fflush(stdin);
        switch(choice){
            case 1:
                login();
                break;
            case 2:
                signUp();
                break;
            case 3:
                exit(-1);
            default:
                printf(BRED"Opcion invalida\n"reset);
                getchar();
                fflush(stdin);
        }
    }
}