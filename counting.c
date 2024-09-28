#include <stdio.h>

unsigned int *increment(void) {

    static unsigned int counter = 0;
    counter++;
    // printf("%d\n", counter);

    return &counter;

}

void retrieve(unsigned int* value) {
    printf("Current counter value: %d\n", *value);
}

int main(void) {

    for (int i = 0; i < 5; i++) {
        unsigned int *ptr = increment();
        retrieve(ptr);
    }

    return 0;

}
