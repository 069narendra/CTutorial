#include <stdio.h>

int main(){
    /* 
      Arithmetic Operators
      Logical Operators
      Relational Operators
      Bitwise Operators
      Assignment Operators
      Misc Operators
    */

    // Arithmetic Operators
    
    int a = 69, b = 30, c = 99;
    printf("The sum of a and b is %d\n", a+b);
    printf("The diffrence of a and b is %d\n", a-b);
    printf("The product of a and b is %d\n", a*b);
    printf("The quotient of a and b is %d\n\n", a/b);

    printf("The modulo of a and b is %d\n\n", a%b);

    printf("The successor of a is %d\n", ++a);
    printf("The predesscor of a is %d\n\n", --a);

    printf("The successor of b is %d\n", ++b);
    printf("The predesscor of b is %d\n", --b);

    // Relational

    int num1 = 69, num2 = 48;

    printf("%d\n", num1==num2);
    printf("%d\n", num1!=num2);
    printf("%d\n", num1>num2);
    printf("%d\n", num1<num2);

    // Logical Operators

    int h = 0, i = 1;
    
    printf("The logical operator returned %d\n", h && i);
    printf("The logical operator returned %d\n", h || i);
    printf("The logical operator returned %d\n", !i);
    printf("The logical operator returned %d\n", !h);

    // Bitwise Operators

    int bit1 = 60, bit2 = 14;

    printf("Bitwise operator returned %d\n", bit1&bit2);
    printf("Bitwise operator returned %d\n", bit1|bit2);
    printf("Bitwise operator returned %d\n", bit1^bit2);
    printf("Bitwise operator returned %d\n", ~bit2);
    printf("Bitwise operator returned %d\n", bit1<<bit2);
    printf("Bitwise operator returned %d\n", bit1>>bit2);

    // Assignment Operators

    int i = 69;
    i += 69;

    printf("i + 69 is %d\n", i);

    // Misc Operators - &, *, ?:


    return 0;
}