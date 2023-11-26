#include "include/cal_programador.h"
#include <ctype.h>
#include <stdlib.h>

// función para convertir un número decimal a binario, recibe el número decimal
void decimal_a_binario(int a) {

    // define un arreglo para almacenar el resultado en binario, con índice i
    int binarios[500], i = 0;

    // ciclo para realizar divisiones sucesivas entre 2
    while (a > 0) {
        // almacena los residuos de cada división
        binarios[i] = a % 2;
        a = a / 2;
        i++;
    }

    // imprime el valor del arreglo
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binarios[j]);
    }
}

// función para convertir un número decimal a hexadecimal, recibe el número decimal
void decimal_a_hexadecimal(int a){

    // por defecto, el modificador %x convierte el número enviado como argumento a hexadecimal
    printf("%x \n", a);

}

// función para convertir un número binario a hexadecimal, recibe el número binario en formato char
void binario_a_hexadecimal(char binario[]){

    long int decimal, hexadecimal = 0, i = 0, residuo;

    // convierte el número a decimal
    decimal = strtol(binario, NULL, 2);

    // convierte el decimal a hexadecimal
    // ciclo para realizar divisiones sucesivas entre 16
    while (decimal != 0) {
        // determina los residuos al dividir entre 16
        residuo = decimal % 16;
        // acumula en el resultado los residuos
        hexadecimal = hexadecimal + residuo * (1 << (i * 4));
        decimal = decimal / 16;
        i++;
    }

    // imprime el resultado
    printf("%lX\n", hexadecimal);
}

// función utilizada por la función de hexadecimal a decimal para convertir los caracteres
// que componen el número hexadecimal a su equivalente en decimal
int caracterHexadecimal_a_decimal(char caracter) {
    // valida que el caracter sea un dígito
    if (isdigit(caracter))
        // la resta de '0' significa que se resta el valor ASCII del 0 al del caracter que se está evaluando
        return caracter - '0';
    // retorna el valor del caracter evaluado (previamente convertido a mayúscula) menos el valor ASCII de la letra A y le suma 10
    return 10 + (toupper(caracter) - 'A');
}

// función para convertir un número hexadecimal a decimal, recibe el número hexadecimal y su longitud
unsigned long long hexadecimal_a_decimal(char *cadenaHexadecimal, int longitud) {

    unsigned long long decimal = 0;
    int potencia = 0;
    // ciclo para recorrer la cadena con el número hexadecimal
    for (int i = longitud - 1; i >= 0; i--) {
        // obtiene el decimal, por ejemplo para A es 10, para F 15 y para 9 es 9
        int valorActual = caracterHexadecimal_a_decimal(cadenaHexadecimal[i]);
        // eleva la base 16 a la potencia que se va incrementando, y multiplicarla por el valor del caracter evaluado
        unsigned long long elevado = pow(16, potencia) * valorActual;
        // se va acumulando el resultado decimal
        decimal += elevado;
        // se va incrementando la potencia
        potencia++;
    }
    // devuelve el resultado en decimal
    return decimal;
}
