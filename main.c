
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include "include/calc_estandar.h"
#include "include/cal_cientifica.h"
#include "include/cal_programador.h"

struct datos {
    float num1; // número 1 para operaciones en la calculadora estándar
    float num2; // número 2 para operaciones en la calculadora estándar
    int entero; // número para cálculos en la calculadora programador
    double raiz; // número para calcular la raíz cuadrada
    char binario[10]; // número binario para cálculos en la calculadora programador
    char hexadecimal[10]; // número hexadecimal para cálculos en la calculadora programador
    int opc; // controla las opciones que se escogen a lo largo de la ejecución del programa
};

// variable tipo datos que controla cada dato utilizado en los cálculos
struct datos dato;

int main() {

    // ciclo para mantener activo el programa hasta que se elija la opción de salir
    do {

        system("cls");
        printf("\n\n Bienvenido a Cal_Ulacit \n\n");
        printf(" Seleccione el tipo de Calculadora desea utilizar:\n\n");

        // Menú de selección
        printf("    1- CALCULADORA tipo ESTANDAR  \n    2- CALCULADORA tipo CIENTIFICA \n    3- CALCULADORA tipo PROGRAMADOR \n    4- SALIR \n\n");
        printf(" Digite una opcion: ");
        // se escanea el valor de la opción pero en formato string para validar si se digita una letra o un número
        scanf("%s", &dato.opc);

        // valida que sea digitado un número
        if (!isdigit(dato.opc)) {

            printf("\n\n    Opcion no valida. Debe digitar un numero entre 1 y 4...\n\n");
            // para no afectar el ciclo principal
            dato.opc = 0;
            printf("\n\n      Presione ENTER para continuar...");
            // permite pausar la ejecución del programa que se muestre el mensaje
            getchar();
            getchar();

        } else {

            // vuelve a convertir la opción digitada a entero para que pueda ser validada por el switch
            dato.opc = dato.opc - '0';

            //SWITCH PRINCIPAL
            switch (dato.opc) {

                // calculadora estándar
                case 1:

                    // muestra el menú de opciones de la calculadora estándar
                    system("cls");
                    printf("\n\n Calculadora tipo ESTANDAR \n\n");
                    printf(" Que operacion desea realizar: \n\n    1- Sumar  \n    2- Restar \n    3- Multiplicar\n    4- Dividir\n\n");
                    printf("  Digite una opcion: ");
                    scanf("%s", &dato.opc);

                    // valida que sea digitado un número
                    if (!isdigit(dato.opc)) {

                        printf("\n\n    Opcion no valida. Debe digitar un numero entre 1 y 4...\n\n");
                        // para no afectar el ciclo principal
                        dato.opc = 0;
                        printf("\n\n      Presione ENTER para continuar...");
                        // permite pausar la ejecución del programa que se muestre el mensaje
                        getchar();
                        getchar();

                    } else {

                        // vuelve a convertir la opción digitada a entero para que pueda ser validada por el switch
                        dato.opc = dato.opc - '0';

                        //SWITCH CALCULADORA ESTANDAR
                        switch (dato.opc) {
                            // se eligió la suma
                            case 1:
                                printf("\n    Ingrese el primer numero: ");
                                scanf("%f", &dato.num1);
                                printf("\n    Ingrese el segundo numero: ");
                                scanf("%f", &dato.num2);
                                // llama a la función que calcula la suma e imprime el resultado
                                printf("\n    La suma es: %d\n", sumar(dato.num1, dato.num2));
                                break;
                            // se eligió la resta
                            case 2:
                                printf("\n    Ingrese el primer numero: ");
                                scanf("%f", &dato.num1);
                                printf("\n    Ingrese el segundo numero: ");
                                scanf("%f", &dato.num2);
                                printf("\n    La resta es: %d\n", restar(dato.num1, dato.num2));
                                break;
                            // se eligió la multiplicacion
                            case 3:
                                printf("\n    Ingrese el primer numero: ");
                                scanf("%f", &dato.num1);
                                printf("\n    Ingrese el segundo numero: ");
                                scanf("%f", &dato.num2);
                                printf("\n    La multiplicacion es: %d\n", multiplicacion(dato.num1, dato.num2));
                                break;
                            // se eligió la división
                            case 4:
                                printf("\n    Ingrese el primer numero: ");
                                scanf("%f", &dato.num1);
                                printf("\n    Ingrese el segundo numero: ");
                                scanf("%f", &dato.num2);
                                if (dato.num2 != 0) {
                                    // el resultado lo muestra con dos decimales
                                    printf("\n    La division es: %.2f\n", division(dato.num1, dato.num2));
                                } else {
                                    printf("\n    Error: No se puede dividir por cero.\n");
                                }
                                // para no afectar la opción 4 del menú principal del programa
                                dato.opc = 0;
                                break;
                            // se eligió una opción inválida
                            default:
                                printf("\n\n    Opcion no valida. Debe digitar un numero entre 1 y 4...\n");
                        }// fin de switch calculadora estandar

                        printf("\n\n      Presione ENTER para continuar...");
                        // permite pausar la ejecución del programa para que se vean los resultados de las operaciones en pantalla
                        getchar();
                        getchar();
                    }// fin del else

                    // regresa al menú principal
                    break;

                // calculadora científica
                case 2:

                    // muestra el menú de opciones de la calculadora científica
                    system("cls");
                    printf("\n\n Calculadora tipo Cientifica \n\n");
                    printf(" Que operacion desea realizar: \n\n    1- 10 exponente N  \n    2- X exponente N \n    3- X exponente 2 \n    4- raiz cuadrada de X \n\n");
                    printf("  Digite una opcion: ");
                    scanf("%s", &dato.opc);

                    // valida que sea digitado un número
                    if (!isdigit(dato.opc)) {

                        printf("\n\n    Opcion no valida. Debe digitar un numero entre 1 y 4...\n\n");
                        // para no afectar el ciclo principal
                        dato.opc = 0;
                        printf("\n\n      Presione ENTER para continuar...");
                        // permite pausar la ejecución del programa que se muestre el mensaje
                        getchar();
                        getchar();

                    } else {

                        // vuelve a convertir la opción digitada a entero para que pueda ser validada por el switch
                        dato.opc = dato.opc - '0';


                        //SWITCH CALCULADORA CIENTIFICA
                        switch (dato.opc) {
                            // se eligió elevar número a la base 10
                            case 1:
                                printf("\n    Ingrese el numero al que desea elevar la base 10: ");
                                scanf("%f", &dato.num1);
                                // llama a la función que calcula e imprime el resultado
                                printf("\n    El resultado es: %.2f \n", exponente_N(dato.num1));
                                break;
                            // se eligió elevar un número x a la potencia n
                            case 2:
                                printf("\n    Ingrese el numero que sera base: ");
                                scanf("%f", &dato.num1);
                                printf("\n    Ingrese el exponente para la potencia: ");
                                scanf("%f", &dato.num2);
                                // llama a la función que calcula e imprime el resultado
                                printf("\n    El resultado es: %.2f \n", X_exponente_N(dato.num1, dato.num2));
                                break;
                            // se eligió elevar un número a la potencia 2
                            case 3:
                                printf("\n    Ingrese el numero para elevar a pontencia 2: ");
                                scanf("%f", &dato.num1);
                                // llama a la función que calcula e imprime el resultado
                                printf("\n    El resultado es: %.2f \n", X_exponente_2(dato.num1));

                                break;
                            // se eligió la raiz cuadrada de un número
                            case 4:
                                printf("\n    Ingrese el numero para obtener su raiz cuadrada: ");
                                scanf("%lf", &dato.raiz);
                                // llama a la función que calcula e imprime el resultado
                                // double resultado=sqrt(dato.raiz);
                                printf("\n    El resultado es: %.2f\n", raiz_cuadrada(dato.raiz));
                                // para no afectar la opción 4 del menú principal del programa
                                dato.opc = 0;
                                break;
                            // se eligió una opción inválida
                            default:
                                printf("\n\n    Opcion no valida. Debe digitar un numero entre 1 y 4...\n");
                        }//fin de switch calculadora científica

                        printf("\n\n      Presione ENTER para continuar...");
                        // permite pausar la ejecución del programa que se muestre el mensaje
                        getchar();
                        getchar();
                    }// fin del else

                    // regresa al menú principal
                    break;

                // calculadora programador
                case 3:

                    // muestra el menú de opciones de la calculadora programador
                    system("cls");
                    printf("\n\n Calculadora tipo Programador \n\n");
                    printf(" Que operacion desea realizar \n\n    1- Conversion de Decimal a Binario  \n    2- Conversion de Decimal a Hexadecimal \n    3- Conversion de Binario a Hexadecimal \n    4- Conversion de Hexadecimal a Decimal \n\n");
                    printf("  Digite una opcion: ");
                    scanf("%s", &dato.opc);

                    // valida que sea digitado un número
                    if (!isdigit(dato.opc)) {

                        printf("\n\n    Opcion no valida. Debe digitar un numero entre 1 y 4...\n\n");
                        // para no afectar el ciclo principal
                        dato.opc = 0;
                        printf("\n\n      Presione ENTER para continuar...");
                        // permite pausar la ejecución del programa que se muestre el mensaje
                        getchar();
                        getchar();

                    } else {

                        // vuelve a convertir la opción digitada a entero para que pueda ser validada por el switch
                        dato.opc = dato.opc - '0';

                        //SWITCH CALCULADORA PROGRAMADOR
                        switch (dato.opc) {
                            // se eligió conversión de decimal a binario
                            case 1:
                                printf("\n    Ingrese el numero decimal por convertir a Binario: ");
                                scanf("%f", &dato.num1);
                                // llama a la función que calcula e imprime el resultado
                                printf("\n    El resultado es: ");
                                decimal_a_binario(dato.num1);
                                break;
                            // se eligió conversión de decimal a hexadecimal
                            case 2:
                                printf("\n    Ingrese el numero decimal por convertir a Hexadecimal: ");
                                scanf("%d", &dato.entero);
                                printf("\n    El resultado es: ");
                                decimal_a_hexadecimal(dato.entero);
                                break;
                            // se eligió conversión de binario a hexadecimal
                            case 3:
                                printf("\n    Ingrese el numero binario por convertir a hexadecimal: ");
                                scanf("%s", &dato.binario);
                                // llama a la función que calcula e imprime el resultado
                                printf("\n    El resultado es: ");
                                binario_a_hexadecimal(dato.binario);
                                break;
                            // se eligió conversión de hexadecimal a decimal
                            case 4:
                                printf("\n    Ingrese el numero hexadecimal (compuesto por numeros de 0 al 9 y letras de la A a la F): ");
                                //fgets(dato.hexadecimal, 2, stdin);
                                //dato.hexadecimal[strcspn(dato.hexadecimal, "\r\n")] = 0;
                                scanf("%s", &dato.hexadecimal);
                                // llama a la función que calcula e imprime el resultado, envía la cadena hexadecimal y su longitud
                                printf("\n    El resultado es: %d", hexadecimal_a_decimal(dato.hexadecimal, strlen(dato.hexadecimal)));
                                // para no afectar la opción 4 del menú principal del programa
                                dato.opc = 0;
                                break;
                            default:
                                printf("\n\n    Opcion no valida. Debe digitar un numero entre 1 y 4...\n");
                        } //fin de switch calculadora programador

                        printf("\n\n\n      Presione ENTER para continuar...");
                        // permite pausar la ejecución del programa que se muestre el mensaje
                        getchar();
                        getchar();
                    }// fin del else

                    // regresa al menú principal
                    break;

                // muestra el mensaje de salida del programa
                case 4:
                    // mensaje de salida
                    printf("\n    Saliendo del programa... \n");
                    break;

                // se eligió una opción inválida
                default:
                printf("\n\n    Opcion no valida. Debe digitar un numero entre 1 y 4...\n");
                printf("\n\n      Presione ENTER para continuar...");
                // permite pausar la ejecución del programa que se muestre el mensaje
                getchar();
                getchar();

            }//fin switch principal
        }// fin else

    // el programa se ejecuta mientras la opción sea diferente de 4
    } while (dato.opc != 4);

    return 0;
}

