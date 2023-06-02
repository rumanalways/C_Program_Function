#include<stdio.h>
//function declaration/ function prototype
void printHello();

int main() {
    printHello(); //function call
    return 0;
}

//function definition
void printHello(){
    printf("Hello World!");
}