#include <stdio.h>

int main(){
    int a = 100;
    printf("%d\n", a);
    int* ptr;
    ptr = &a;
    *ptr = 199;
    printf("%d", a);
}