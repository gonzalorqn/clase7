#include <stdio.h>
#include <stdlib.h>
#define T 3

float calcularPromedio(int,int);
void mostrarAlumnos(int[],char[][30],int[],int[],float[],int);

int main()
{
    int legajos[T];
    char nombres[T][30];
    int nota1[T];
    int nota2[T];
    float promedios[T];
    int i;

    for(i=0;i<T;i++)
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

    mostrarAlumnos(legajos,nombres,nota1,nota2,promedios,T);
    return 0;
}

float calcularPromedio(int nota1,int nota2)
{
    float promedio;
    promedio = (float)(nota1 + nota2)/2;
    return promedio;
}

void mostrarAlumnos(int legajos[],char nombres[][30],int nota1[],int nota2[],float promedios[],int cantidad)
{
    int i;
    for(i=0;i<cantidad;i++)
    {
        printf("\nLegajo: %d",legajos[i]);
        printf("\nNombre: %s",nombres[i]);
        printf("\nPrimer nota: %d",nota1[i]);
        printf("\nSegunda nota: %d",nota2[i]);
        printf("\nPromedio: %.2f \n",promedios[i]);
    }
}
