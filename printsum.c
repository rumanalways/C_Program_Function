#include<stdio.h>

int printsum(int a, int b);

int main ()
{
    int a, b;
    printf("Enter the frist Number: ");
    scanf("%d", &a);
    printf("Enter the second Number: "); 
    scanf("%d", &b);

    int s = printsum(a, b);
    printf("The Sum is: %d \n", s);
    return 0;
}
int printsum(int a, int b) {
    return a + b;
}