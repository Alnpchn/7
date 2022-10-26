#include <stdio.h>
#include <math.h> 
#include<locale.h>


int main()
{
    char c1;
    setlocale(LC_ALL, "RUS");
    printf("задание 1\n");
    printf("задать символ: ");
    scanf("%c", &c1);
    switch (c1) {
    case '0': printf("это цифра\n"); break;
    case '1': printf("это цифра\n"); break;
    case '2': printf("это цифра\n"); break;
    case '3': printf("это цифра\n"); break;
    case '4': printf("это цифра\n"); break;
    case '5': printf("это цифра\n"); break;
    case '6': printf("это цифра\n"); break;
    case '7': printf("это цифра\n"); break;
    case '8': printf("это цифра\n"); break;
    case '9': printf("это цифра\n"); break;
    default: printf("это буква\n");
    }
    printf("задание 2\n");
    float a, b;
    char n;
    printf("Enter two numbers:");
    scanf("%f", &a);
    scanf("%c", &n);
    scanf("%f", &b);
    printf("Enter your choice:\n 1.Summation\n 2.Subtraction\n 3.multiplication\n");
    printf("4.Division\n 5.Square of a number\n");

    switch (n)
    {
    case '+':
        printf("The sum of %.f and %.f is %.2f ", a, b, a + b);
        break;
    case '-':
        printf("The Subtraction of %.f and %.f is %.2f", a, b, a - b);
        break;
    case '*':
        printf("The multiplication of %.f and %.f is %.2f", a, b, a * b);
        break;
    case '/':
        printf("The division of %.f and %.f is %.2f", a, b, a / b);
        break;
    default:
        printf("invalid");
    }
    printf("\n\n");
    return 0;


}
