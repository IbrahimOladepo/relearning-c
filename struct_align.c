#include <stdio.h>
#include <string.h>

struct Padded {
    char a;    // 1 byte
    int b;     // 4 bytes
    double c;  // 8 bytes
};

#pragma pack(1) // Disable padding
struct Packed {
    char a;    // 1 byte
    int b;     // 4 bytes
    double c;  // 8 bytes
};
#pragma pack() // Reset to default packing

struct sigrecord {
    int signum;
    char signame[20];
    char sigdesc[100];
} sigline, *sigline_p;


int main() {

    printf("Size of struct Padded: %zu\n", sizeof(struct Padded));
    printf("Size of struct Packed: %zu\n", sizeof(struct Packed));

    unsigned char bad_buff[sizeof(struct Padded)];
    _Alignas(struct Padded) unsigned char good_buff[sizeof(struct Padded)];
    
    struct Padded *bad_s_ptr = (struct Padded *)bad_buff;   // wrong pointer alignment
    struct Padded *good_s_ptr = (struct Padded *)good_buff; // correct pointer alignment

    printf("Size of struct Padded: %zu\n", sizeof(bad_buff));
    printf("Size of struct Packed: %zu\n", sizeof(good_buff));

    sigline.signum = 5;
    strcpy(sigline.signame, "SIGINT");
    strcpy(sigline.sigdesc, "Interrupt from keyboard!");

    sigline_p = &sigline;

    sigline_p->signum = 5;
    strcpy(sigline_p->signame, "SIGINT");
    strcpy(sigline_p->sigdesc, "Interrupt from keyboard");
    
    return 0;

}
