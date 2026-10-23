#include <stdio.h>

int increment (int a) {
    return a++;
}

int main () {

    int i = 10;
    increment(i);

    printf("i == %d\n", i);

    return 0;
}