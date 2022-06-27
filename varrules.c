#include <stdio.h>

int main(){
    // You can only start a var with a underscore. You can't start a var with a special letter;

    int a; // Var declaration
    a = 69; // This is var initialization
    char b =  'A'; // This is var declaration and initialization

    const int b = 50; // You can't change this variable. This a read-only type variable.
    // a = 60 -> This will throw a error
    
    return 0;
}