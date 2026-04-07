#include <stdio.h>

int main() {

    int v[5] = {10, 20, 30, 40, 50};

    int increase;
    int *p1;

    p1 = &v[0];

    for (int i = 0; i < 5; i++) {
        
        printf("%d\n", *p1);
        increase = *p1 + increase;
        p1++;

    }

    printf("Soma Final = %d\n", increase);

    return 0;

}
