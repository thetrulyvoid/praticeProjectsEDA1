#include <stdio.h>

int conta(char *str, char c) {

    int contagem = 0;

    for (int i = 0)

    return contagem;

}

int main() {

    char nome[] = "programacao";
    char c = 'c';
    int contagem = conta(&nome, c);



    return 0;
}