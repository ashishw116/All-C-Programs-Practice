//Write a program to print the colors of Rainbow on entering its first character of the color.
#include<stdio.h>
void main()
{
    printf("Enter The Character of Rainbow in UpperCase=");
    char c=getchar();
    switch(c)
    {
        case 'R':
            printf("\nRed");
            break;
        case 'O':
            printf("\nOrange");
            break;
        case 'Y':
            printf("\nYellow");
            break;
        case 'G':
            printf("\nGreen");
            break;
        case 'B':
            printf("\nBlue");
            break;
        case 'I':
            printf("\nIndigo");
            break;
        case 'V':
            printf("\nViolet");
            break;
        default:
            printf("\nInvalid Input");
            break;
    }
}
