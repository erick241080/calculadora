#include "include/cal_programador.h"


void decimal_a_binario(int a) {

    int binarios[500], i = 0;

    while (a > 0) {
        binarios[i] = a % 2;
        a = a / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {

        printf("%d", binarios[j]);
    }
}


void decimal_a_hexa(int a){

    printf("%x\n", a);
}


void binario_hexadecimal(char binario_rev){

char binario[100];
int num_conver;

  int binario_a_decimal(char *binario) {

    int longitud = strlen(binario);
    int decimal = 0;

            for (int i = 0; i < longitud; i++) {
                if (binario[i] == '1') {
                    decimal = (decimal << 1) | 1;
                } else if (binario[i] == '0') {
                    decimal = decimal << 1;
                } else {
                    // Manejar un car�cter no v�lido (no es '0' ni '1')
                    printf("Error: Entrada no v�lida.\n");
                    return -1;  // Indicar un error
                }
            }
            num_conver = decimal;

            return num_conver;
        }
    }



double hexa_a_decimal(double a){



return a;
}
