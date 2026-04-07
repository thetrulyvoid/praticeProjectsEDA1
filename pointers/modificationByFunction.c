#include <stdio.h>

void dobra(int *x) {

    for (int i = 0; i < 5; i++) {
        
        *x = (*x*2);
        printf("%d\n", *x);

    }

}

int main() {

    int normal = 10;

    dobra(&normal);

    printf("\n%d\n", normal);

    return 0;
}