#include <stdio.h>
#include <stdlib.h>
/*
* /brief Recibe y controla que lo ingresado haya sido un entero.
* /param es el puntero donde se guardara el numero en caso de que este dentro de los parametros
* /param el mensaje que le pedira al usuario dato
* /param el mensaje de error que aparece si se ingresa algo fuera de rango
* /param el maximo del numero que se puede ingresar
* /param el minimo del numero que se puede ingresar
* /param la cantidad de reintentos que tendra el usuario en caso de ingresar un dato fuera de rango.
* /return retorna un valor quee nos dira si la funcion no tuvo problema para ejecutarse o si se dio algun error
*/
int getInt(int* resultado, char* mensaje, char* mensajeError, int maximo, int minimo, int reintentos){

    int retorno=-1;
    long auxiliarLongNumeroIngresado;

    do{
        printf("%s\n", mensaje);
        scanf("%ld",&auxiliarLongNumeroIngresado);
        if(auxiliarLongNumeroIngresado>=minimo && auxiliarLongNumeroIngresado<=maximo){
            retorno=0;
            *resultado=(int)auxiliarLongNumeroIngresado;
            break;
        }
        printf("%s\n", mensajeError);
        printf("el numero ingresado es: %ld\n", auxiliarLongNumeroIngresado);
        printf("cantidad de intentos restantes es: %d\n", reintentos);
        reintentos--;
        fflush(stdin);
    }while(reintentos>=0);
    return retorno;
}
/*
* /brief Recibe un primer numero y un segundo numero y los suma
* /param primer numero ingresado por el usuario
* /param segundo numero ingresado por el usuario
* /param puntero del resultado de la suma
* /return retorna un valor quee nos dira si la funcion no tuvo problema para ejecutarse o si se dio algun error
*/
int sumaNumeros (int numero1, int numero2, float* resultadoSuma){
    long resultado;
    int retorno=-1;
    resultado= (float)numero1 + numero2;
    if(resultado<=2147483647 && resultado>=-2147483647){
        *resultadoSuma=(float)resultado;
        retorno=0;
    }
    return retorno;
}
/*
* /brief Recibe un primer numero y un segundo numero y los resta
* /param primer numero ingresado por el usuario
* /param segundo numero ingresado por el usuario
* /param puntero del resultado de la resta
* /return retorna un valor quee nos dira si la funcion no tuvo problema para ejecutarse o si se dio algun error
*/
int restaNumeros(int numero1, int numero2, float* resultadoResta){
    long resultado;
    int retorno=-1;
    resultado=(float)numero1 - numero2;
    if(resultado<=2147483647 && resultado>=-2147483647){
        *resultadoResta=(float)resultado;
        retorno=0;
    }
    return retorno;
}
/*
* /brief Recibe un primer numero y un segundo numero y los divide
* /param primer numero ingresado por el usuario
* /param segundo numero ingresado por el usuario
* /param puntero del resultado de la division
* /return retorna un valor quee nos dira si la funcion no tuvo problema para ejecutarse o si se dio algun error
* /el retorno=-2 es cuando el segundo operando es 0 con este retorno puedo saber que el usuario ingreso un 0 para la division.
*/
int divisionNumeros(int numero1, int numero2, float* resultadoDivision){
    float resultado;
    int retorno=-1;
    resultado=(float)numero1 / numero2;
    if((numero2<0 || numero2>0) && resultado<=2147483647 && resultado>=-2147483647){
        *resultadoDivision=(float)resultado;
        retorno=0;
    }
    else if (numero2==0){
        retorno=-2;
    }
    return retorno;
}
/*
* /brief Recibe un primer numero y un segundo numero y los multiplica
* /param primer numero ingresado por el usuario
* /param segundo numero ingresado por el usuario
* /param puntero del resultado de la multiplica
* /return retorna un valor que nos dira si la funcion no tuvo problema para ejecutarse o si se dio algun error
*/
int multiplicacionNumeros(int numero1, int numero2, float*resultadoMultiplicacion){
    long resultado;
    int retorno=-1;
    resultado=(float)numero1 * numero2;
    if(resultado<=2147483647 && resultado>=-2147483647){
        *resultadoMultiplicacion=(float)resultado;
        retorno=0;
    }
    return retorno;
}
/*
* /brief Recibe un primer numero y haya su factorial
* /param primer numero ingresado por el usuario
* /param puntero del resultado del factorial
* /return retorna un valor que nos dira si la funcion no tuvo problema para ejecutarse o si se dio algun error
*/
int factorialNumero1(int numero1, float* resultadoFactorial){
    long resultado=numero1;
    int retorno=-1;
    while(numero1>1){
        numero1--;
        resultado=numero1*resultado;
    }
    if(resultado<=2147483647 && resultado>0){
        *resultadoFactorial=(float)resultado;
        retorno=0;
    }
    return retorno;
}


