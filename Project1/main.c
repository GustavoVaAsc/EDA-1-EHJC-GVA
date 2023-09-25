#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef _WIN32
    #include <windows.h>
    #include <shellapi.h>
    #include <shlwapi.h>
#else
    #include <unistd.h>
    #include <Carbon/Carbon.h>
    #include <AppleEvents/AppleEvents.h>
#endif


#include "colorMacros.h" // Macros para color de letras y fondo

enum boolean {false, true};

#include "dataStructuresDef.h" // Definicion de las estructuras de datos

//Multi-platform functions

#include "clearScreen.c"
#include "playSong.c"

//Multi-platform functions end

//Funciones cola circular doble

#include "listSort.c"
#include "popFront.c"
#include "popBack.c"
#include "pushFront.c"
#include "pushBack.c"
#include "circularShow.c"
#include "startQueue.c"

//Fin funciones cola circular doble

//Funciones pila

#include "pop.c"
#include "push.c"
#include "switchNodes.c"

//Fin funciones pila

//Funciones lista doblemente ligada

#include "writePlaylist.c"
#include "delete.c"
#include "deleteAll.c"
#include "searchID.c"
#include "searchUser.c"
#include "insert.c"
#include "showList.c" // Muestra cualquier lista doblemente ligada en el programa
#include "randomPlaylist.c"

//Fin funciones lista de la lista doble

#include "songQueueOptions.c"
#include "playlistOptions.c"
#include "readPlaylist.c" //Lee la playlist del usuario
#include "readDatabase.c" //Funcion para cargar la base de datos
#include "menu.c" //Menu de usuario

//------- Funciones para la tabla hash ---------

#include "hash.c" //Funcion hash para la tabla (Mediante prueba lineal)
#include "initializeTable.c" //Inicializa la tabla
#include "addEntry.c" //Agrega una nueva entrada a la tabla
#include "findEntry.c" //Comprueba las credenciales del usuario en la tabla
#include "deleteEntry.c" //Borra una entrada de la tabla hash
#include "printTable.c" //Uso para casos de prueba
#include "freeTable.c" //Libera la tabla una vez terminada la ejecución del programa

//------- Fin funciones tabla hash ----------

#include "saveState.c" //Guarda la tabla hash cuando se realice una modificacion
#include "checkUser.c" //Revisa si el usuario ya existe
#include "signUp.c" //Funcion para registrar un nuevo usuario
#include "login.c" //Funcion para iniciar sesion
#include "loginSystem.c" //Sistema inicial de C-Potify

int main(){
    loginSystem();
    return 0;
}