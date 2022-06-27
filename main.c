#include <stdio.h>

int main(){
    // Single line comment

    /*
       Multi line comment
    */

    int a = 69; // 2 to 4 bytes
    float b = 69.69; // 4 bytes - 6 decimal precision
    char c = 'N'; // 1 byte

    unsigned short intgr = 9; // 2 bytes
    short intgr1 = 6; // 2 bytes
    long intgr2 = 8; // 4 bytes
    double flt = 69.69; // 8 bytes - 15 decimal places precision
    long double flt1 = 79.646748489; // 10 bytes - 19 decimal places precision

    printf("I like the number %d\n", a);

    printf("Hello C!\nI am CWN\n");

    printf("The size taken by a int is %d\n", sizeof(int));
    printf("The size taken by a unsigned int is %d\n", sizeof(unsigned int));
    printf("The size taken by a long int is %d\n", sizeof(long int));
    printf("The size taken by a short int is %d\n", sizeof(short int));
    return 0;
}