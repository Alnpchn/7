#include <stdio.h>
#include <math.h> 
#include<locale.h>


int main()
{
    char c1;
    setlocale(LC_ALL, "RUS");
    printf("������� 1\n");
    printf("������ ������: ");
    scanf("%c", &c1);
    switch (c1) {
    case '0': printf("��� �����\n"); break;
    case '1': printf("��� �����\n"); break;
    case '2': printf("��� �����\n"); break;
    case '3': printf("��� �����\n"); break;
    case '4': printf("��� �����\n"); break;
    case '5': printf("��� �����\n"); break;
    case '6': printf("��� �����\n"); break;
    case '7': printf("��� �����\n"); break;
    case '8': printf("��� �����\n"); break;
    case '9': printf("��� �����\n"); break;
    default: printf("��� �����\n");
    }
    printf("������� 2\n");
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