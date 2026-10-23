#include <stdio.h>

void increment (int *a) {
   *a += 1;
}

int main (void) {

    int i = 10;

    increment(&i);

    printf("i == %d\n", i);

    return 0;
}