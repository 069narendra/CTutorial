#include <stdio.h>

int sum(int a, int b){
    return a+b;
}

float average(float a, float b){
    return (a+b)/2;
}

int main(){
    printf("%d\n", sum(25, 82));

    printf("The average of 853 and 147 is %f\n", average(843, 157));

    return 0;
}