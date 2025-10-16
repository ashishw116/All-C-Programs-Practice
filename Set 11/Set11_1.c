//Write a program to check whether a given number is even or odd.
#include<stdio.h>
void main()
{
    int num;
    printf("Enter Integer=");
    scanf("%d",&num);
    switch(num%2)
    {
        case 0:
            printf("%d is even",num);
            break;
        case 1:
            printf("%d is odd",num);
            break;
    }
}
