#include <stdio.h>

int main() {

    int var1 = 5;
    int var2 = 10;

    int *temp;
    int *p1;
    int *p2;

    p1 = &var1;
    p2 = &var2;
    
    printf("Var 1 = %d\nVar 2 = %d\n", var1, var2);

    *temp = *p1;
    *p1 = *p2;
    *p2 = *temp;

    printf("Var 1 = %d\nVar 2 = %d\n", var1, var2);

    return 0;
}