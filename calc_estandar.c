
// calc_estandar.c

#include "include/calc_estandar.h"

int sumar(int a, int b) {
    return a + b;
}

int restar(int a, int b) {
    return a - b;
}

int multiplicacion(int a, int b) {
    return a * b;
}

float division(float a, float b) {
    if (b != 0) {
        return a / b;
    } else{
        // Manejo de división por cero

        printf("Error División por cero no es posible \n");

        return 0.0;

    }
}
