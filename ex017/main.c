#include <stdio.h>

int double_array (int *a, int len) {

    for (int i = 0; i < len; i++) {
        a[i] *= 2;
    }
}

int main (void) {

    int p[5] = {1, 2, 3, 4, 5};
    double_array(p, 5);

    for (int i = 0; i < 5; i++) {
        printf("%d\n", p[i]);
    }

    return 0;
}