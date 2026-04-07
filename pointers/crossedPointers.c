#include <stdio.h>

int main() {

    int A = 10, B = 20;
    int *p1, *p2;

    p1 = &A;
    p2 = &B;

    printf("A = %d\nB = %d\n", *p1, *p2);

    int *temp; //Variável temporária para trocar os ponteiros;

    temp = p1;
    p1 = p2;
    p2 = temp;

    printf("A = %d\nB = %d\n", *p1, *p2);


    return 0;
}