void intro(){
    printf("-*-*-*-*-*-*-*-*-*-*-*-*-*- UNIFILA FI-MART -*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n\n");
    printf("Bienvenidx al sistema de unifila\n");
    printf("Si la cantidad de productos que compraste es menor a 20, iras a la unifila (Queue Front)\n");
    printf("De otro modo iras a la fila normal (Queue Back)\n");
    printf("Si no hay ningun pedido por despachar en alguna de las dos filas, se pueden paralelizar\n");
    printf("los repartos aunque su cantidad de articulos no sea la adecuada para la fila\n");
    printf("Si unicamente hay una persona en la fila o unifila respectivamente, no se podra encolar por\n");
    printf("el lado contrario hasta liberar espacio, por lo que arrojara un error de fila llena\n");
    getchar();
    fflush(stdin);
}