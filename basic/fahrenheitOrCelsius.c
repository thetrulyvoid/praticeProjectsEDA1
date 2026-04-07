#include <stdio.h>

int main()
{

    float temperatura;
    char menu;
    printf("Escolha uma opção de Conversão de Temperatura:\n\n(C) - Fahrenheit para Celsius\n(F) - Celsius para Fahrenheit\n(S) - Sair\n");

    scanf(" %c", &menu);

    while (menu != 'S')
    {
        switch (menu)
        {
        case 'C':
            printf("Digite sua temperatura em Fahrenheit: ");
            scanf("%f", &temperatura);
            temperatura = ((temperatura-32)*5)/9;
            printf("O Resultado em Celsius é: %.2f\n\n", temperatura);
            break;

        case 'F':
            printf("Digite sua temperatura em Celsius: ");
            scanf("%f", &temperatura);
            temperatura = (temperatura*1.8)+32;
            printf("O Resultado em Fahrenheit é: %.2f\n\n", temperatura);
            break;

        default:
            printf("Valor inválido!\n");
            break;
        }

        printf("Escolha uma opção de Conversão de Temperatura:\n\n(C) - Fahrenheit para Celsius\n(F) - Celsius para Fahrenheit\n(S) - Sair\n");
        scanf(" %c", &menu);
    }

    return 0;
}