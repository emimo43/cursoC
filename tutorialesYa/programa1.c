/*
    Calculo del sueldo de un operario por hora trabajada
*/
#include <stdio.h>

int main()
{
    //Estas son las variables
    int horasTrabajadas;
    float costoHora;
    float sueldo;

    //Ahora solicitaremos los datos al usuario
    printf("Ingrese las horas trabajadas por el Empleado: \n");
    scanf("%i", &horasTrabajadas);
    printf("Ingrese el pago por hora: \n");
    scanf("%f", &costoHora);

    sueldo = horasTrabajadas * costoHora;
    printf("El sueldo total del operario es: \n");
    printf("%f", sueldo);
    getchar();

    return 0;
}