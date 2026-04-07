#include <stdio.h>

int main() {

    int var1 = 50;
    float var2 = 33.2;

    int *prt1;
    float *prt2;

    prt1 = &var1;
    prt2 = &var2;

    printf("\nVariável 1 = %d\nVariável 2 = %.2f\n", *prt1, *prt2);

    return 0;
}