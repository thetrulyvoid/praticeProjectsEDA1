#include <stdio.h>

void trocarValores(float *ptr1, float *ptr2) {

    float temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

} 

int main() {

    float a = 3.14;
    float b = 2.71;

    printf("Valores originais: a = %.2f, b = %.2f\n", a, b);

    trocarValores(&a, &b); //Dando acesso ao espaço na memória que está os valores, se fosse sem o & seria só o valor, mas o valor na memória da variável continuaria igual.

    printf("Valores trocados: a = %.2f, b = %.2f\n", a, b);

    return 0;
}