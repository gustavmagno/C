#include <stdio.h>

char *my_strcpy(char *destination, const char *source) {

    for (int i = 0; destination[i] = source [i]; i++){
        destination[i] = source[i];
    }
    return destination;
}

int main () {

    char strcpy0[20] = "OK";
    const char* strcpy1 = "Everythings good!";
    my_strcpy(strcpy0, strcpy1);

    printf("%s", strcpy0);

    return 0;
}