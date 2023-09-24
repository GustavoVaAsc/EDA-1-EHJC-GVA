void intro(){
    printf("-*-*-*-*-*-*-*-*-*-*-*-*-*-TORRES DE HANOI-*-*-*-*-*-*-*-*-*-*-*-*-*-\n\n");
    printf("Bienvenidx al juego torres de hanoi\n");
    printf("El juego consiste de tres pilas: ABC; con n discos de 1 hasta n de anchura\n");
    printf("Para casos practicos de este programa, consistira de 5 discos\n\n");
    printf("Las reglas son las siguientes: \n\n");
    printf("1: Solo se puede mover un disco a la vez\n");
    printf("2: No se puede apilar un disco mas grande sobre uno mas chico\n");
    printf("3: Solo se pueden mover los discos de arriba en la torre\n");
    printf("4: Puedes mover los discos a las pilas B o C segun decidas\n");

    getchar();
    fflush(stdin);
}