#include <stdio.h>

int main(){
    int arr[10] = {13,22,30,46,54,69,75,89,79,101};

    for (int i = 0; i < 10; i++)
    {
        printf("Enter the value for our index %d \n", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("The value for our index %d is %d\n", i, arr[i]);
    }

    return 0;
}