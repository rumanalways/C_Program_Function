//write functions to calculate area of square, a circle and a reactangle

#include<stdio.h>
#include<math.h>

float squarearea(float side);
float circlearea(float red);
float rectanglearea(float a, float b);

int main () {
    float side, red, a, b;
    printf("Enter the area of a square: ");
    scanf("%f", &side);
    printf("Enter the area of a Circle: ");
    scanf("%f", &red);
    printf("Enter the area of a rectangle A and B: ");
    scanf("%f%f", &a,&b);

    float square = squarearea(side); {
        printf("Area of a Square is: %.2f\n", square);
    }
    float circle = circlearea(red); {
        printf("Area of a Circle is: %.2f\n", circle);
    }
    float rectangle = rectanglearea(a,b); {
        printf("Area of a Rectangle is: %.2f\n", rectangle);
    }

    return 0;
}
float squarearea(float side) {
    return pow(side,2);
}
float circlearea(float red) {
    return 3.14 * pow(red, 2);
}
float rectanglearea(float a , float b) {
    return a * b;
}