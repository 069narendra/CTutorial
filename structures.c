#include <stdio.h>
#include <string.h>

struct Books{
    char name[50];
    char author[50];
    int price;
} structure;

void printStruct(struct Books bk){
    printf("Name: %s\n", bk.name);
    printf("Author: %s\n", bk.author);
    printf("Price: %d\n", bk.price);
}

int main(){

    struct Books bk1, bk2;
    strcpy(bk1.name, "C Programming");
    strcpy(bk1.author, "Dennis Richie");
    bk1.price = 90;

    printStruct(bk1);


    return 0;
}