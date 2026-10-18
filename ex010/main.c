#include <stdio.h>

int my_strcmp(const char *destination, const char *source) {

    while (*destination && *destination == *source) {
        destination++;
        source++;
    }
    return (unsigned char)*destination - (unsigned char)*source;
/*    int i, j;
    int FirtCmpVal[30] = {0}, SecondCmpVal[30] = {0};
    char position[30] = {
    'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
    'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
    'u', 'v', 'w', 'x', 'y', 'z'};

    for (i = 0; destination[i] != '\0'; i++) {
        for (j = 0; j < 26; j++) {
            if (destination[i] == position[j]) {
                FirtCmpVal[i] = j;
                break;
            }
        }
    }
    int destLen = i;
    
    for (i = 0; source[i] != '\0'; i++) {
        for (j = 0; j < 26; j++) {
            if (source[i] == position[j]) {
                SecondCmpVal[i] = j;
                break;
            }
        }
    }

    int srcLen = i;

    int minLen = destLen < srcLen ? destLen : srcLen;
    for (i = 0; i < minLen; i++) {
        if (FirtCmpVal[i] < SecondCmpVal[i]) return -10;
        if (FirtCmpVal[i] > SecondCmpVal[i]) return 10;
    }

    if (destLen == srcLen) return 0;
    return (destLen < srcLen) ? -10 : 10; */

}

int main () {
    char *strcmp0 = "Cat";
    char *strcmp1 = "Cats";
    printf("%d", my_strcmp(strcmp0, strcmp1));
}