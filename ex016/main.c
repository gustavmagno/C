#include <stdio.h>

char *my_strchr (const char *s, int c);

int main (void) {

    const char s[] = "banana";
    
    printf("%c\n", my_strchr(s, 'b'));
    
    return 0;
}

char *my_strchr (const char *s, int c) {

   char *result = s;

   while (*s != c) {
        s++;
        
        if (*s == c) {
            return result;
        }
    }
    return NULL;
}
