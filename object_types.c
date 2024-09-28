#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

_Bool flag1 = 0;
bool flag2 = false;

uint32_t lga_ng = 744;

int main(void) {

    int i = 70;
    int *ip = &i;

    printf("i: %d, pointer to i: %p\n", i, &*ip);
    printf("i: %d, pointer to i: %p\n", i, &i);

    char str[11];
    for (unsigned int i = 0; i < 10; ++i) {
        /*
        str[i] is identical to *(str + i)
        because str is a pointer in actuality;
        str points to the fisrt member of the array.
        */ 
        str[i] = '0' + i;        
    }

    return 0;

}
