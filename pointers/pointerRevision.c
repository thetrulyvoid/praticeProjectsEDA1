#include <stdio.h>

int main() {

    int n = 637;

    int *ptr;

    ptr = &n;

    printf("%d\n", *ptr);

    return 0;
}