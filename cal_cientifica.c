
// cal_cientifica.c

#include "include/cal_cientifica.h"
#include <math.h>

// funci�n para calcular 10 elevado a la N, devuelve un float
float exponente_N(float a) {

    // hace el c�lculo y lo almacena en resultado
    float resultado = pow(10,a);
    // devuelve resultado
    return resultado;

}

// funci�n para calcular X elevado a la N, devuelve un float
float X_exponente_N(float a, float b) {

    // hace el c�lculo y lo almacena en resultado
    float resultado = pow(a,b);
    // devuelve resultado
    return resultado;

}

// funci�n para calcular X elevado a la 2, devuelve un float
float X_exponente_2(float a) {

    // hace el c�lculo y lo almacena en resultado
    float resultado = pow(a,2);
    // devuelve resultado
    return resultado;

}

// funci�n para calcular la ra�z cuadrada de X, devuelve un double
double raiz_cuadrada(double a) {

    // hace el c�lculo y lo almacena en resultado
    double raiz = sqrt(a);
    // devuelve resultado
    return raiz;

}

