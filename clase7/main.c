#include <stdio.h>
#include <stdlib.h>

float calcularPromedio(int,int);

int main()
{
    int legajos[3];
    char nombres[3][30];
    int nota1[3];
    int nota2[3];
    float promedios[3];
    int i;

    for(i=0;i<3;i++)
    {
        printf("Ingrese legajo: ");
        scanf("%d", &legajos[i]);
        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(nombres[i]);
        printf("Ingrese nota 1: ");
        scanf("%d", &nota1[i]);
        printf("Ingrese nota 2: ");
        scanf("%d", &nota2[i]);
        promedios[i]=calcularPromedio(nota1[i],nota2[i]);
    }

    for(i=0;i<3;i++)
    {
        printf("\nLegajo: %d",legajos[i]);
        printf("\nNombre: %s",nombres[i]);
        printf("\nPrimer nota: %d",nota1[i]);
        printf("\nSegunda nota: %d",nota2[i]);
        printf("\nPromedio: %.2f \n",promedios[i]);
    }

    return 0;
}

float calcularPromedio(int nota1,int nota2)
{
    float promedio;
    promedio = (float)nota1 + nota2;
    promedio = promedio/2;
    return promedio;
}
