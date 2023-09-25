void clearScreen(){
    #ifdef _WIN32
        char SO = 'W';
    #endif

    #ifdef __APPLE__
        char SO = 'A';
    #endif

    #ifdef __unix__
        char SO = 'U';
    #endif

    if(SO == 'W'){
        system("cls");
    }else if(SO == 'A'){
        system("clear");
    }else if(SO == 'U'){
        system("clear");
    }

}