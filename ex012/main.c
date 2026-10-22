#include <stdio.h>


int main () {

    int a = 999;

    printf("%zu\n", sizeof a);
    printf("%zu\n", sizeof(2 + 7));
    printf("%zu\n", sizeof 3.14);

    return 0;
}