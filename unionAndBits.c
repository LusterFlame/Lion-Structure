#include <stdio.h>
 
struct bits {
    unsigned char b1 : 1;
    unsigned char b2 : 1;
    unsigned char b3 : 1;
    unsigned char b4 : 1;
    unsigned char b5 : 1;
    unsigned char b6 : 1;
    unsigned char b7 : 1;
    unsigned char b8 : 1;
};
 
union {
    unsigned char chr;
    struct bits b;
} u;
 
int main(void) {
    u.chr = 43;
    printf("u.chr = %d\n", u.chr);
    printf("u.chr in bit = %d%d%d%d%d%d%d%d\n", 
            u.b.b1, u.b.b2, u.b.b3, u.b.b4, u.b.b5, u.b.b6, u.b.b7, u.b.b8);
    
    return 0;
}