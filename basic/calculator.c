#include <stdio.h>

int main() {

    int menu;

    float numero1;
    float numero2;

    printf("Insira o 1° número:\n");
    scanf("%f", &numero1);
    printf("Insira o 2° número:\n");
    scanf("%f", &numero2);
    printf("Digite a operação desejada:\n\n(1) Soma\n(2) Subtração\n(3) Multiplicação\n(4) Divisão\n");
    scanf("%d", &menu);

    switch (menu)
    {
    case 1:
        printf("Resultado: %.2f\n", numero1 + numero2);
        break;
    
    case 2:
        if (numero1 < numero2) {
            printf("Resultado: %.2f\n", numero2 - numero1);
        }
        else {
            printf("Resultado: %.2f\n", numero1 - numero2);
        }
        break;

    case 3:
        printf("Resultado: %.2f\n", numero1 * numero2);
        break;

    case 4:
        printf("Resultado: %.2f\n", numero1 / numero2);
        break;

    default:
        printf("Entrada inválida!\n");
        break;
    }

    return 0;
}