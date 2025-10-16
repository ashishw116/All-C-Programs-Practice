//Write a program to perform the different arithmetic operations based on the user choice in numerical form.
#include<stdio.h>
void main()
{
    int choice,result;
    float modules;
    printf("----------Menu----------\n");
    printf("1 : Addition\n");
    printf("2 : Subtraction\n");
    printf("3 : Multiplication\n");
    printf("4 : Division\n");
    printf("5 : Modules\n");
    printf("------------------------\n");
    int a,b;
    printf("Enter 2 Integers=");
    scanf("%d%d",&a,&b);
    printf("Enter Your Choice=");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            result=a+b;
            printf("\n Addition=%d",result);
            break;
        case 2:
            result=a-b;
            printf("\n Subtraction=%d",result);
            break;
        case 3:
            result=a*b;
            printf("\n Multiplication=%d",result);
            break;
        case 4:
            result=a/b;
            printf("\n Division=%d",result);
            break;
        case 5:
            modules=a%b;
            printf("\n Modules=%d",modules);
            break;

        default:
            printf("\n Invalid Input!!!!");
            break;
    }
}

