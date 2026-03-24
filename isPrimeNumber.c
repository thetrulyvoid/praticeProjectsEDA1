#include <stdio.h>

int main()
{

    int number = 1;
    printf("Digite um número abaixo para descobrir se é primo ou não (digite 0 para finalizar o programa):\n");

    while (number != 0) {

        scanf("%d", &number);

        if ((number % 2 != 0 && number % 3 != 0) || number == 2 || number == 3) {

            printf("É primo!\n");
        }

        else {

            printf("Não é primo!\n");
        }
    }

    return 0;
}