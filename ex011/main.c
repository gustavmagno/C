#include <stdio.h>

char *my_strncpy(char *destination, const char *source, size_t count) {
    char *start = destination;

    while (count) {
        *destination++ = *source++;
        count--;
        continue;
    }
    if (!count && source) {
        *destination++ = 0;
    }
    
    return start;
}

int main () {
    char *a = "cat";
    char b[] = "aaaaaaa";
    printf("%s", my_strncpy(b, a, 2));
    return 0;
}