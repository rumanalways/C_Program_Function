#include<stdio.h>

void printHello();
void printgoodbye();

int main() {
    printHello();
    printgoodbye();
    return 0;
}

void printHello() {
    printf("Hello!\n");
}

void printgoodbye() {
    printf("Goodbye:)\n");
}