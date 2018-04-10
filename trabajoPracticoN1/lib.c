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
    if(resultado<=32767 && resultado>=-32768){
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
    if(resultado<=32767 && resultado>=-32768){
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
*/
int divisionNumeros(int numero1, int numero2, float* resultadoDivision){
    float resultado;
    int retorno=-1;
    resultado=(float)numero1 / numero2;
    if((numero2<0 || numero2>0) && resultado<=32767 && resultado>=-32768){
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
    if(resultado<=32767 && resultado>=-32768){
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
    if(resultado<=32767 && resultado>0){
        *resultadoFactorial=(float)resultado;
        retorno=0;
    }
    return retorno;
}


