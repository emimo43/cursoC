#include <stdio.h>

int main()
{
    /*
    //Constantes, estas no cambian dentro del bloque de codigo, siempre va en Mayuscula
    #define NOMBRE valor; -->constantes
    tipoDato Nombre = valor; -->variables
    */

   float sueldo = 25.456;
   float bono = 4.560;
   sueldo += bono; //sueldo = sueldo + bono
   printf("%f",sueldo);
    return 0;
}