
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "include/calc_estandar.h"
#include "include/cal_programador.h"
#include "include/cal_conver.h"

struct datos {
    float num1;
    float num2;
    int entero;
    double raiz;
    char binario_enviado;
    int opc;
};

struct datos dato;

int numeroDecimalito;

int main() {

    system("clear");
    printf("\n\n Bienvenido a Cal_Ulacit \n\n");
    printf("Seleccione qué tipo de Calculadora desea utilizar!\n\n");
    // Menú de selección
    printf("    1-CALCULADORA tipo ESTANDAR  \n    2-CALCULADORA tipo CIENTIFICA \n    3-CALCULADORA tipo PROGRAMADOR\n");
    scanf("%d", &dato.opc);


    //SWITCH PRINCIPAL
    switch (dato.opc) {

    case 1:
        system("clear");
        printf(" Calculadora tipo estandar \n\n");
        printf(" Que operacion desea realizar \n   1-Sumar  \n    2-Restar \n    3-Multiplicar\n    4-Dividir\n\n");
        scanf("%d", &dato.opc);
        printf("Ingrese el primer numero \n");
        scanf("%f", &dato.num1);

        printf("\nIngrese el segundo numero \n");
        scanf("%f", &dato.num2);

        //SWITCH CALCULADORA ESTANDAR
        switch (dato.opc) {
            case 1:
                printf("\n La suma es: %d\n", sumar(dato.num1, dato.num2));
                break;
            case 2:
                printf("\n La resta es: %d\n", restar(dato.num1, dato.num2));
                break;
            case 3:
                printf("\n La multiplicacion es: %d\n", multiplicacion(dato.num1, dato.num2));
                break;
            case 4:
                if (dato.num2 != 0) {
                    printf("\n La division es: %f\n", division(dato.num1, dato.num2));
                } else {
                    printf("\n Error: No se puede dividir por cero.\n");
                }
                break;
            default:
                printf("\n Opción no válida\n");
        }// fin de switch calculadora estandar

        break;

        case 2:

        system("clear");
        printf(" Calculadora tipo Cientifica \n\n");
        printf(" Que operacion desea realizar \n   1- 10 exponente N  \n    2- X exponente N \n    3- X exponente 2 \n    4- raíz cuadrada de X \n\n");
        scanf("%d", &dato.opc);


            //SWITCH CALCULADORA CIENTIFICA
            switch (dato.opc) {
            case 1:


                printf(" Introduzca el numero al que desea elevar la base 10  \n");
                scanf("%f", &dato.num1);

                printf("\n El resultado es :  %f \n", exponente_N(dato.num1));

                break;
            case 2:

                printf(" Introduzca el numero como base para calcular con el exponente  \n");
                scanf("%f", &dato.num1);

                printf(" Ingrese el exponente para la potencia  \n ");
                scanf("%f", &dato.num2);

                printf("\n el resultado es :  %f \n", X_exponente_N(dato.num1, dato.num2));

                break;
            case 3:

                printf(" Introduzca el numero para elevar a pontencia 2  \n");
                scanf("%f", &dato.num1);

                printf("\n El resultado es :  %f \n", X_exponente_2(dato.num1));

                break;
            case 4:

                printf(" Introduzca el numero para obtener su raiz cuadrada");
                 scanf("%lf", &dato.raiz);

                   // double resultado=sqrt(dato.raiz);
                 printf("\n La raiz cuadrada es :  %.2lf\n", raiz_cuadrada(dato.raiz));

                break;

                } //fin SWITCH CALCULADORA CIENTIFICA



                case 3:

                    system("clear");
                    printf(" Calculadora tipo Programador \n\n");
                    printf(" Que operacion desea realizar \n   1- Convercion de Decimal a Binario  \n    2- Convercion de Decimal a Hexadecimal \n    3- Convercion de Binario a decimal \n    4- Convercion de Hexadecimal a decimal \n\n");
                    scanf("%d", &dato.opc);

            //SWITCH CALCULADORA PROGRAMADOR
            switch (dato.opc) {
            case 1:


                printf(" Introduzca el numero a convertir a Binario \n");
                scanf("%f", &dato.num1);

                printf(" EL numero binario es  : \n ");
                 decimal_a_binario(dato.num1);

                break;
            case 2:

                printf(" Introduzca el numero a convertir a Hexadecimal \n");
                scanf("%d", &dato.entero);
                     printf("\n El numero es : \n");
                     decimal_a_hexa(dato.entero);

                break;
            case 3:

                printf(" Introduzca el numero a convertir a decimal \n");
                scanf("%s", &dato.binario_enviado );
                printf(" \el numero es : ");
                //binario_decimal(dato.binario_enviado);

                break;
            case 4:



                break;

        }
        break;


    }



    return 0;
}

