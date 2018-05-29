#ifndef PELICULAS_H_INCLUDED
#define PELICULAS_H_INCLUDED
typedef struct
{
    char titulo[50];
    char genero[50];
    char duracion[50];
    char descripcion[50];
    int puntaje;
    char linkImagen[50];
    int idMovie;
}Movie;

Movie* peliculas_new();
Movie* peliculas_newP( char* genero, char* duracion, char* descripcion, int puntaje,char* linkImagen,int idMovie);
void peliculas_delete(Movie* this);

int peliculas_setNewId(Movie* this);
int peliculas_setId(Movie* this,int id);
int peliculas_getId(Movie* this, int* id);

int peliculas_setTitulo(Movie* this, char* titulo);
int peliculas_getTitulo(Movie* this, char* titulo);

int peliculas_setGenero(Movie* this, char* genero);
int peliculas_getGenero(Movie* this, char* genero);

int peliculas_setDuracion(Movie* this, char* duracion);
int peliculas_getDuracion(Movie* this, char* duracion);

int peliculas_setDescripcion(Movie* this, char* descripcion);
int peliculas_getDescripcion(Movie* this, char* descripcion);

int peliculas_setPuntaje(Movie* this, int puntaje);
int peliculas_getPuntaje(Movie* this, int* puntaje);

int peliculas_setLinkImagen(Movie* this, char* linkImagen);
int peliculas_getLinkImagen(Movie* this, char* linkImagen);

#endif // PELICULAS_H_INCLUDED
