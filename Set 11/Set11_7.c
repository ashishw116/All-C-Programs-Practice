//Write a program to accept a month number and print its Name.
#include<stdio.h>
void main()
{
    int num;
    printf("Enter 1-12 number=");
    scanf("%d",&num);
    switch(num)
    {
        case 1:
            printf("\n January");
            break;
        case 2:
            printf("\n February");
            break;
        case 3:
            printf("\n March");
            break;
        case 4:
            printf("\n April");
            break;
        case 5:
            printf("\n May");
            break;
        case 6:
            printf("\n June");
            break;
        case 7:
            printf("\n July");
            break;
        case 8:ss
            printf("\n August");
            break;
        case 9:
            printf("\n September");
            break;
        case 10:
            printf("\n October");
            break;
        case 11:
            printf("\n November");
            break;
        case 12:
            printf("\n December");
            break;
        default:
            printf("\n Invalid Input!!!!");
            break;
    }
}
