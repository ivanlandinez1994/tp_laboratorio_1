#include <stdio.h>
#include <stdlib.h>
#include "peliculas.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void mostrar(Movie* array[],int cantidad);
int main()
{
    int lenPelisActual = 0;
    int lenPelisMaximo = 100;
    Movie* arrayPunteroPeliculas[lenPelisMaximo];

    peliculas_arrayAdd(arrayPunteroPeliculas,lenPelisMaximo,&lenPelisActual,"fuckers","suspenso","1.30","hahahhah",10,"asdasd",8);
    mostrar(arrayPunteroPeliculas,lenPelisActual);
    int respuesta;
    do
    {
        printf("\n1- Agregar pelicula\n");
        printf("2- Borrar pelicula\n");
        printf("3- Modificar pelicula\n");
        printf("4- Generar pagina web\n");
        printf("5- Salir\n");
        scanf("%d",&respuesta);
        switch(respuesta)
        {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
        }
    }while(respuesta!=5 && respuesta<6);
    return 0;
}

/*void cargar(Movie** array,int cantidadMaxima,int* cantidadActual)
{
    char titulo[50];
    char genero[50];
    char duracion[50];
    char descripcion[50];
    int puntaje;
    char linkImagen[50];
    int idMovie;

    int validacionFile;
    FILE* archivo;
    archivo = fopen("data.txt","r");
    if(archivo!=NULL)
    {
        do
        {
            validacionFile=fscanf(archivo,"%d,%[^,],%[^,],%[^,],%f\n",&id,nombre,apellido,cuit,&altura);
            if(validacionFile==5)
                arrayAlumno_add(array, cantidadMaxima, cantidadActual, "1213", nombre,apellido,cuit,altura,id);

        }while(!feof(archivo));
    }
    fclose(archivo);
}*/

void mostrar(Movie* array[],int cantidad)
{
    int i;
    char titulo[50];
    char genero[50];
    char duracion[50];
    char descripcion[50];
    int puntaje;
    char linkImagen[50];
    int idMovie;
    for(i=0;i<cantidad;i++)
    {
        peliculas_getTitulo(array[i],titulo);
        peliculas_getGenero(array[i],genero);
        peliculas_getDuracion(array[i],duracion);
        peliculas_getDescripcion(array[i],descripcion);
        peliculas_getPuntaje(array[i],&puntaje);
        peliculas_getLinkImagen(array[i],linkImagen);
        peliculas_getId(array[i],&idMovie);
        printf("\nTitulo: %s - Genero: %s - Duracion: %s - Descripcion: %s - Puntaje: %d"
               " - LinkImagen: %s - IdMovie: %d\n",titulo,genero,duracion,descripcion,puntaje,linkImagen,idMovie);
    }
}

/*void modificar(Alumno* array[],int cantidad)
{
    int i;
    Movie* auxiliarMovie;
    for(i=5;i<10;i++)
    {
        auxiliarAlumno = arrayAlumno_getById(array,cantidad,i);
        if(auxiliarAlumno != NULL)
        {
            alumno_setAltura(auxiliarAlumno,88);
        }
    }
}*/

/*int guardarTodo(Alumno* array[],int cantidad)
{
    int retorno=-1;
    int i;
    char cuit[50];
    float altura;
    char nombre[50];
    char apellido[50];
    int id;
    FILE* archivo;
    archivo=fopen("data.txt","w");
    if(archivo!=NULL)
    {
        for(i=0;i<cantidad;i++)
        {
            alumno_getCuit(array[i],cuit);
            alumno_getAltura(array[i],&altura);
            alumno_getId(array[i],&id);
            alumno_getNombre(array[i],nombre);
            alumno_getApellido(array[i],apellido);
            fprintf(archivo,"%d,%s,%s,%s,%f\n",id,nombre,apellido,cuit,altura);
            retorno=0;
        }
    }
    return retorno;
}*/
