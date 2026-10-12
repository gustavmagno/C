#include <stdio.h>

int main () {
    int x;
    printf("Type a number");
    scanf("%d", &x);
    printf("The number %d is %s.\n", x, x % 2 == 0? "even" : "odd");
}