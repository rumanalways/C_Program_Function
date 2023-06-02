#include<stdio.h>

void printsalam();
void printbonjour();

int main() {
    printf("Enter F for French and B for Bangladesh : ");
    char ch;
    scanf("%c",&ch);

    if(ch == 'b') {
        printsalam();
    } else {
        printbonjour();
    }

return 0;
}

void printsalam() {
    printf("Assalamu Alaikum\n");
}

void printbonjour() {
    printf("Bonjour\n");
}