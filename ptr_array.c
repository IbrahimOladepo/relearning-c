#include <stdio.h>

void f1(void) {
    printf("This is function 01.\n");
}

void f2(void) {
    printf("This is function 02.\n");
}

void f3(void) {
    printf("This is function 03.\n");
}


int main(void){

    // Declare a type for a function pointer
    typedef void (*fp)(void);

    // Declare an array of function pointers
    fp fps[3] = {f1, f2, f3};

    // Create loop to call each function
    for(int i = 0; i < 3; i++) {
        fps[i]();
    }

}
