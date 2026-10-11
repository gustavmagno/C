#include <stdio.h>
#include <stlib.h>

typedef struct arguments {
    unsigned int files_count;
    char **files;
}arguments;

void parse_arguments(int argc, char **argv, arguments *args) {
    args->files = malloc(argc * sizeof(char *));
    for (int i = 1; i < argc; i++) {
    
    };
};

int main(int argc, char **argv) {
    return 0;
}