#include <stdint.h>
#include <stdio.h>

int main(void) {

    unsigned int i = 0;
    unsigned int j = 0;

    int arr[3][5];

    printf("Array [1][1] address: %p\n", &arr[1][1]);
    printf("Array [1][2] address: %p\n", &arr[1][2]);

    printf("Array [2][1] address: %p\n", &arr[2][1]);
    printf("Array [2][2] address: %p\n", &arr[2][2]);

    return 0;

}
