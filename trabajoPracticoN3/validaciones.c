#include "validaciones.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int valid_string(char* string)
{
    int retorno = -1;
    int i=0;
    while(string[i] != '\0')
    {
        if((string[i]>'A' && string[i] <'Z') && (string[i]>'a' && string[i] <'z') && (string[i]!=' '))
            retorno=0;
    }
    return retorno;
}

int valid_puntaje(int puntaje)
{
    int retorno=-1;
    if(puntaje>=0 && puntaje<=10)
        retorno=0;
    return retorno;
}

int valid_duracion(char* duracion)
{
    int retorno = -1;
    int i=0;
    int cantidadPuntos=0;
    while(duracion[i] != '\0')
    {
        if (i == 0 && duracion[i] == '-')
        {
            i++;
            continue;
            retorno=0;
        }
        if (duracion[i] == '.' && cantidadPuntos == 0)
        {
            cantidadPuntos++;
            i++;
            continue;
            retorno=0;
        }
        if(duracion[i] < '0' || duracion[i] > '9')
            retorno=-1;
        i++;
    }
    return retorno;
}
