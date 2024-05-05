#include "test_unit/test_unit.h"
#include <stdio.h>

int main() {
    FILE oldstdout = *stdout;
    FILE *mystdout = fopen("/dev/null", "w");
    *stdout = *mystdout;

    char *message;
    int test_code = test_unit(&message);

    *stdout = oldstdout;
    fclose(mystdout);

    if (test_code) {
        printf("\033[31m\033[1m");
        printf("*** ERROR ***\n");
        printf("%s\n", message);
        printf("\033[0m");
    } else {
        printf("\033[0;32;32m");
        printf("Tests passed\n");
        printf("\033[0m");
    }

    return 0;
}