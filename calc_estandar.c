
// calc_estandar.c

#include "include/calc_estandar.h"

// función para calcular la suma, devuelve un entero
int sumar(int a, int b) {

    // calcula el resultado y lo devuelve
    return a + b;

}

// función para calcular la resta, devuelve un entero
int restar(int a, int b) {

    // calcula el resultado y lo devuelve
    return a - b;

}

// función para calcular la multiplicación, devuelve un entero
int multiplicacion(int a, int b) {

    // calcula el resultado y lo devuelve
    return a * b;

}

// función para calcular la división, devuelve un float
float division(float a, float b) {

    // valida que el divisor no sea cero
    if (b != 0) {

        // calcula el resultado y lo devuelve
        return a / b;

    } else{

        // Manejo de división por cero
        printf("Error División por cero no es posible \n");

        return 0.0;

    }
}
