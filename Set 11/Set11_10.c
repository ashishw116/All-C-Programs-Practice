//Write a program to perform the different arithmetic operations based on the user choice in symbolic form.
#include<stdio.h>
void main()
{
    printf("----------Menu----------\n");
    printf("+ Addition\n");
    printf("- Subtraction\n");
    printf("* Multiplication\n");
    printf("/ Division\n");
    printf("% Modules\n");
    printf("------------------------\n");
    char choice;
    printf("Enter Your Choice=");
    scanf("%c",&choice);
    int a,b,result;
    float modules;
    printf("Enter 2 Integers=");
    scanf("%d%d",&a,&b);
    switch(choice)
    {
        case '+':
            result=a+b;
            printf("\n Addition=%d",result);
            break;
        case '-':
            result=a-b;
            printf("\n Subtraction=%d",result);
            break;
        case '*':
            result=a*b;
            printf("\n Multiplication=%d",result);
            break;
        case '/':
            result=a/b;
            printf("\n Division=%d",result);
            break;
        case '%':
            modules=a%b;
            printf("\n Modules=%d",modules);
            break;
        default:
            printf("\n Invalid Input!!!!");
            break;
    }
}

