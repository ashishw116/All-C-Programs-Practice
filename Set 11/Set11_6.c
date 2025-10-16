//Write a program to accept a Week day number and print its Name.
#include<stdio.h>
void main()
{
    int num;
    printf("Enter 1-7 number=");
    scanf("%d",&num);
    switch(num)
    {
        case 1:
            printf("\n Sunday");
            break;
        case 2:
            printf("\n Monday");
            break;
        case 3:
            printf("\n Tuesday");
            break;
        case 4:
            printf("\n Wednesday");
            break;
        case 5:
            printf("\n Thursday");
            break;
        case 6:
            printf("\n Friday");
            break;
        case 7:
            printf("\n Saturday");
            break;
        default:
            printf("\n Invalid Input!!!!");
            break;
    }
}
