#include <stdio.h>

typedef struct arguments {
    unsigned int files_count;
    char **files;
}arguments;

void parse_arguments(int argc, char **argv, arguments *args) {
    for (int i = 1; i < argc; i++) {
    
    };
};

int main(int argc, char **argv) {
    return 0;
}