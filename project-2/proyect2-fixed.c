#include <stdio.h>

// By havi arji
// https://github.com/4rji/C-Programming/tree/main/project-2

int input();
void output(float);
float areaOfCircle(int radius);
float areaOfSquare(int side);

int main() {
    float result;
    int choice, num;

    do {
        printf("1. Calculate area of circle \n");
        printf("2. Calculate area of square \n");
        printf("3. Surface area of cuboid \n");
        printf("4. Surface area of cylinder \n");
        printf("0. Quit \n");
        printf("Enter your choice: ");
        choice = input();

        switch (choice) {
            case 0: break;
            case 1: {
                printf("\nEnter radius: ");
                num = input();
                result = areaOfCircle(num);
                printf("Area of circle = ");
                output(result);
                break;
            }
            case 2: {
                printf("\nEnter side of square: ");
                num = input();
                result = num * num;
                printf("Area of square = ");
                output(result);
                break;
            }
            case 3: {
                float l, w, h;
                printf("\nEnter length: ");
                l = input();
                printf("Enter width: ");
                w = input();
                printf("Enter height: ");
                h = input();
                result = 2 * (l*h + l*w + h*w);
                printf("Surface area of cuboid = ");
                output(result);
                break;
            }
            case 4: {
                float r, h;
                printf("\nEnter radius: ");
                r = input();
                printf("Enter height: ");
                h = input();
                result = 2 * 3.14 * r * (h + r);
                printf("Surface area of cylinder = ");
                output(result);
                break;
            }
            default:
                printf("Wrong input\n");
        }

        printf("\n\nProject developed by Havi. Sat, Oct 25 - 2025\n");
        printf("------------------------------\n\n");
    } while (choice != 0);

    return 0;
}

int input() {
    int number;
    scanf("%d", &number);
    return number;
}

void output(float number) {
    printf("%f", number);
}

float areaOfCircle(int radius) {
    return radius * radius * 3.14;
}