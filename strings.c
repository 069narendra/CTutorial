#include <stdio.h>
#include <string.h>


int main(){
    char name[3] = {'N', 'S', '\0'};
    printf("%s\n", name);
    char str1[60], str2[35], str3[70];

    strcpy(str1, "Hello ");
    strcpy(str2, "C!");
    strcat(str1, str2);
    // printf(str1);
    printf("%d", strcmp(str1, str2));

    return 0;
}