#include <stdio.h>

int maior(int *v, int tamanho) {

    int temp = 0;
    for (int i = 0; i < tamanho; i++) {

        if (*v > temp) {

            temp = *v;

        }
        v++;
    }

    return temp;

}

int main() {

    int vetor[5] = {10, 5, 6, 95, 38};
    
    int maiorNumero = maior(&vetor[0], 5);

    printf("%d\n", maiorNumero);

    return 0;
}