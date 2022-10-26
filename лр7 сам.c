#define _CRT_SECURE_NO_DEPRECATE 

#include <stdio.h> 

#include<locale.h> 



int main()

{

    char c;



    setlocale(LC_ALL, "RUS");



    printf("Введите цифру:");

    scanf("%c", &c);



    switch (c) {

    case '0': printf("0 - zero\n"); break;

    case '1': printf("1 - one\n"); break;

    case '2': printf("2 - two\n"); break;

    case '3': printf("3 - three\n"); break;

    case '4': printf("4 - four\n"); break;

    case '5': printf("5 - five\n"); break;

    case '6': printf("6 - six\n"); break;

    case '7': printf("7 - seven\n"); break;

    case '8': printf("8 - eight\n"); break;

    case '9': printf("9 - nine\n"); break;

    default: printf("Это не цифра\n");

    }



}