//using library functions to calculate the square of a number given by user.

#include<stdio.h>
#include<math.h>

int printsquare(int number);

int main () {
    int number, suqare;
    printf("Enter the Number: ");
    scanf("%d",&number);
    
    suqare = printsquare(number);
    printf("The Square is: %d\n", suqare);    
    return 0;
}
int printsquare(int number) {
    return number*number;
}