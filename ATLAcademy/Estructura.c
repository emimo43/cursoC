//Aqui veremos como es la estructura de un programa c
#include <stdio.h>

int main()
{
    int edad = 43;
    int edad2 = 15;
    //printf("%d", edad); //Con "%d" le indicamos al lenguaje que imprima la variable edad
    //Ahora veremos como imrpimir dos variables, pero primero la segunda
    printf("La segunda edad es: %d \n- La primera edad es:  %d", edad2, edad, "\n");

    // "%d" es un caracter de modificacion en C, en este caso estamos guardando un entero
    return 0;
}