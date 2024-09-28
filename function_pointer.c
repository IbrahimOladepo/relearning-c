#include <stdio.h>

// For the first declaration
char some_function(void) {
    return 'A';
}

int main (void){

    char (*fp) (void) = some_function;

    char result = fp();
    printf("Result: %c\n", result);

    return 0;

}

