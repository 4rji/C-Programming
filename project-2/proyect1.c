#include <stdio.h>
// Function prototypes
int input();
void output(float);
float areaOfCircle(int radius);
float areaOfSquare(int side);
int main()
{
float result;
int choice, num;
do {
// Menu
printf("1. Calculate area of circle\n");
printf("2. Calculate area of square\n");
printf("0. Quit\n");
printf("Enter your choice:\t");
//INPUT
choice = input();
//PROCESSING 
switch (choice) {
case 0: {break;}
case 1: {
printf("Enter radius:\n");
num = input();
result = areaOfCircle(num);
printf("Area of circle=");
output(result);
break; }
case 2: {
printf("Enter side of square:\n");
num = input();
result = num * num;
printf("Area of square=");
output(result);
break;}
case 3: {
printf("Enter radius:\n");
num = input();
result = 4 * (3.14 * num * num);
printf("Area of sphere=");
output(result);
break;}
default:
printf("wrong Input\n");
}
printf("\nProject developed by Sam Espana. Updated by Your name. Date: \n");
} while (choice != 0); 
return 0;
}
// function to take input
int input()
{
int number;
scanf("%d", &number);
return (number);
}
// function to print output
void output(float number) { printf("%f", number); }
//Area of a circle
float areaOfCircle(int radius)
{
return radius*radius*3.14;
}