#include <stdio.h>
#include <stdlib.h>
#define TAM_STR 20

//3. Dada la siguiente estructura generar una funci�n que permita ordenar un array de dicha estructura por tipo. Ante igualdad de tipo deber� ordenarse por efectividad creciente. Hardcodear datos y mostrarlos desde el main.
typedef struct
{
    int id;
    char nombre[20];
    char tipo;
    float efectividad;
} eVacuna;

float aplicarAumento(float precioSinAumento);
int reemplazarCaracteres(char cadena[], int tam, char charOriginal, char charSustituto);

int main()
{

    char cadena[TAM_STR] = "juan";
    int contadorCambios = reemplazarCaracteres(cadena, TAM_STR, 'j', 't');
    printf("%s\n", cadena);
    printf("El caracter se remplazo %d veces\n", contadorCambios);
    float precioSinAumento = 5;
    float precioConAumento = aplicarAumento(precioSinAumento);
    printf("%f\n", precioConAumento);
    return 0;
}

//1. Crear una funci�n llamada aplicarAumento que reciba como par�metro el precio de un producto y devuelva el valor del producto con un aumento del 5%. Realizar la llamada desde el main.
float aplicarAumento(float precioSinAumento)
{
    float precioConAumento = 0;
    if (precioSinAumento > 0)
    {

        precioConAumento = precioSinAumento + (precioSinAumento / 100) * 5;
    }
}
//2. Crear una funci�n que se llame reemplazarCaracteres que reciba una cadena de caracteres como primer par�metro, un car�cter como segundo y otro car�cter  como tercero,  la misma deber� reemplazar cada ocurrencia del segundo par�metro por el tercero y devolver la cantidad de veces que se reemplazo ese car�cter  en la cadena
int reemplazarCaracteres(char cadena[], int tam, char charOriginal, char charSustituto)
{
    int contador = 0;
    if (cadena != NULL && tam > 0)
    {
        for (int i = 0; i < tam; i++)
        {
            if (cadena[i] == charOriginal)
            {
                cadena[i] = charSustituto;
                contador++;
            }
        }
    }
    return contador;
}

// Dada la siguiente estructura generar una funci�n que permita ordenar un array de dicha estructura por tipo. Ante igualdad de tipo deber� ordenarse por efectividad creciente. Hardcodear datos y mostrarlos desde el main. *

int ordenarVacunasTipoEfectividad(eVacuna lista[], int tam)
{
    int todoOk = 0;
    if (!= NULL && tam > 0)
    {
        eVacuna auxVacuna;
        for (int i = 0; i < tam - 1; i++)
        {
            for (int j = i + 1; j < tam; j++)
            {
                if (lista[i].tipo == lista[j].tipo && lista[i].efectividad < lista[j].efectividad)
                {
                    auxVacuna = lista[i];
                    lista[i] = lista[j];
                    lista[j] = auxVacuna;
                }
                else if (lista[i].tipo < lista[j] tipo)
                {
                    auxVacuna = lista[i];
                    lista[i] = lista[j];
                    lista[j] = auxVacuna;
                }
            }
        }
        todoOk = 1;
    }
    return todoOk;
}
