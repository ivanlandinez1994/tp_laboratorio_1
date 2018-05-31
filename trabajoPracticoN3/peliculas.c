#include "peliculas.h"
#include "validaciones.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Movie* peliculas_new()
{
    return malloc(sizeof(Movie));
}

Movie* peliculas_newP(char* titulo, char* genero, char* duracion, char* descripcion, int puntaje,char* linkImagen,int idMovie)
{
    Movie* this = peliculas_new();

    if(     !peliculas_setTitulo(this,titulo)
       &&   !peliculas_setGenero(this,genero)
       &&   !peliculas_setDuracion(this,duracion)
       &&   !peliculas_setDescripcion(this,descripcion)
       &&   !peliculas_setPuntaje(this,puntaje)
       &&   !peliculas_setLinkImagen(this,linkImagen)
       &&   !peliculas_setId(this,idMovie))
    {
        return this;
    }
    peliculas_delete(this);
    return NULL;

}

void peliculas_delete(Movie* this)
{
    free(this);
}

int peliculas_setTitulo(Movie* this, char* titulo)
{
    int retorno = -1;
    if(this!=NULL && titulo!=NULL && !valid_string(titulo))
    {
        retorno=0;
        strcpy(this->titulo,titulo);
    }
    return retorno;
}

int peliculas_getTitulo(Movie* this, char* titulo)
{
    int retorno = -1;
    if(this!=NULL && titulo!=NULL)
    {
        retorno=0;
        strcpy(titulo,this->titulo);
    }
    return retorno;
}

int peliculas_setGenero(Movie* this, char* genero)
{
    int retorno = -1;
    if(this!=NULL && genero!=NULL && !valid_string(genero))
    {
        retorno=0;
        strcpy(this->genero,genero);
    }
    return retorno;
}

int peliculas_getGenero(Movie* this, char* genero)
{
    int retorno = -1;
    if(this!=NULL && genero!=NULL)
    {
        retorno=0;
        strcpy(genero,this->genero);
    }
    return retorno;
}

int peliculas_setDuracion(Movie* this, char* duracion)
{
    int retorno = -1;
    if(this!=NULL && duracion!=NULL && !valid_string(duracion))
    {
        strcpy(this->duracion,duracion);
        retorno = 0;
    }
    return retorno;
}

int peliculas_getDuracion(Movie* this, char* duracion)
{
    int retorno = -1;
    if(this != NULL && duracion != NULL)
    {
        strcpy(duracion,this->duracion);
        retorno = 0;
    }
    return retorno;
}

int peliculas_setDescripcion(Movie* this, char* descripcion)
{
    int retorno = -1;
    if(this!=NULL && descripcion!=NULL && !valid_string(descripcion))
    {
        retorno=0;
        strcpy(this->descripcion,descripcion);
    }
    return retorno;
}

int peliculas_getDescripcion(Movie* this, char* descripcion)
{
    int retorno = -1;
    if(this!=NULL && descripcion!=NULL)
    {
        retorno=0;
        strcpy(descripcion,this->descripcion);
    }
    return retorno;
}

int peliculas_setPuntaje(Movie* this, int puntaje)
{
    int retorno = -1;
    if(this != NULL && !valid_puntaje(puntaje))
    {
        this->puntaje = puntaje;
        retorno = 0;
    }
    return retorno;
}

int peliculas_getPuntaje(Movie* this, int* puntaje)
{
    int retorno = -1;
    if(this != NULL && puntaje != NULL)
    {
        *puntaje = this->puntaje;
        retorno = 0;
    }
    return retorno;
}

int peliculas_setLinkImagen(Movie* this, char* linkImagen)
{
    int retorno = -1;
    if(this!=NULL && linkImagen!=NULL && !valid_string(linkImagen))
    {
        retorno=0;
        strcpy(this->linkImagen,linkImagen);
    }
    return retorno;
}

int peliculas_getLinkImagen(Movie* this, char* linkImagen)
{
    int retorno = -1;
    if(this!=NULL && linkImagen!=NULL)
    {
        retorno=0;
        strcpy(linkImagen,this->linkImagen);
    }
    return retorno;
}

static int ultimoId = -1;
int peliculas_setNewId(Movie* this)
{
    int retorno = -1;
    if(this != NULL)
    {
        ultimoId++;
        this->idMovie = ultimoId;
        retorno = 0;
    }
    return retorno;
}

int peliculas_setId(Movie* this,int id)
{
    int retorno = -1;
    if(this != NULL)
    {
        if(id!= - 1)
        {
            if(id > ultimoId)
            {
                ultimoId = id;
                this->idMovie = id;
            }
        }
        else
            peliculas_setNewId(this);
        retorno = 0;
    }
    return retorno;
}

int peliculas_getId(Movie* this, int* id)
{
    int retorno = -1;
    if(this != NULL && id != NULL)
    {
        *id = this->idMovie;
        retorno = 0;
    }
    return retorno;
}

void peliculas_arrayAdd(Movie** array,int cantidadMaxima,int* cantidadActual,char* titulo, char* genero,
                         char* duracion, char* descripcion,int puntaje,char* linkImagen,int idMovie)
{
    //falta validar
    array[*cantidadActual]  = peliculas_newP(titulo,genero,duracion,descripcion,puntaje,linkImagen,idMovie);
    (*cantidadActual)++;
}

