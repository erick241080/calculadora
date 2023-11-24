
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

    // ciclo para mantener activo el programa hasta que se elija la opción de salir
    do {

        system("cls");
        printf("\n\n Bienvenido a Cal_Ulacit \n\n");
        printf(" Seleccione el tipo de Calculadora desea utilizar:\n\n");

        // Menú de selección
        printf("    1-CALCULADORA tipo ESTANDAR  \n    2-CALCULADORA tipo CIENTIFICA \n    3-CALCULADORA tipo PROGRAMADOR \n    4-SALIR \n\n");
        printf(" Digite una opcion: ");
        scanf("%d", &dato.opc);


        //SWITCH PRINCIPAL
        switch (dato.opc) {

        // calculadora estándar
        case 1:

            // muestra el menú de opciones de la calculadora estándar
            system("cls");
            printf("\n\n Calculadora tipo ESTANDAR \n\n");
            printf(" Que operacion desea realizar: \n\n    1-Sumar  \n    2-Restar \n    3-Multiplicar\n    4-Dividir\n\n");
            printf("  Digite una opcion: ");
            scanf("%d", &dato.opc);
            printf("\n    Ingrese el primer numero: ");
            scanf("%f", &dato.num1);
            printf("\n    Ingrese el segundo numero: ");
            scanf("%f", &dato.num2);

            //SWITCH CALCULADORA ESTANDAR
            switch (dato.opc) {
                // se eligió la suma
                case 1:
                    // llama a la función que calcula la suma e imprime el resultado
                    printf("\n    La suma es: %d\n", sumar(dato.num1, dato.num2));
                    break;
                // se eligió la resta
                case 2:
                    printf("\n    La resta es: %d\n", restar(dato.num1, dato.num2));
                    break;
                // se eligió la multiplicacion
                case 3:
                    printf("\n    La multiplicacion es: %d\n", multiplicacion(dato.num1, dato.num2));
                    break;
                // se eligió la división
                case 4:
                    if (dato.num2 != 0) {
                        // el resultado lo muestra con dos decimales
                        printf("\n    La division es: %.2f\n", division(dato.num1, dato.num2));
                    } else {
                        printf("\n    Error: No se puede dividir por cero.\n");
                    }
                    // para no afectar la opción 4 del menú principal del programa
                    dato.opc = 0;
                    break;
                default:
                    printf("\n Opción no válida\n");
            }// fin de switch calculadora estandar

            // regresa al menú principal
            break;

            // calculadora científica
            case 2:

            // muestra el menú de opciones de la calculadora científica
            system("cls");
            printf("\n\n Calculadora tipo Cientifica \n\n");
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

        printf("\n\n      Presione ENTER para continuar...");
        // permite pausar la ejecución del programa para que se vean los resultados de las operaciones en pantalla
        getchar();
        getchar();

    // el programa se ejecuta mientras la opción sea diferente de 4
    } while (dato.opc != 4);

    // mensaje de salida
    printf("\n    Saliendo del programa... \n");

    return 0;
}

