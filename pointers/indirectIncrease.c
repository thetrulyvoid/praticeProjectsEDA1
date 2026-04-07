#include <stdio.h>

int main() {

    int var1 = 10;
    int *prt;

    prt = &var1;

    *prt = (*prt + 5)*2;

    printf("Resultado Final = %d\n", var1);

    return 0;
}