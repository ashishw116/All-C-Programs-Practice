//Write a program to perform 5 arithmetic operations based on users given choice and ask the user to continue or not.
#include<stdio.h>
void main()
{
    int a,b,choice,ch;
    printf("Enter 2 numbers= ");
    scanf("%d%d",&a,&b);
    do
    {
        printf("\n----Menu----\n 1 : Addition\n 2 : Subtraction\n 3 : Multiplication\n 4 : Division\n 5 : Modulus");
        printf("\nEnter Your Choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 :
                printf("\n Addition=%d",a+b);
                break;
            case 2 :
                printf("\n Subtraction=%d",a-b);
                break;
            case 3 :
                printf("\n Multiplication=%d",a+b);
                break;
            case 4 :
                printf("\n Division=%d",a+b);
                break;
            case 5 :
                printf("\n Modulus=%d",a+b);
                break;
            default :
                printf("\nInvalid Choice!!!!");
        }
        printf("\nEnter 1 For Continue, 0 For No : ");
        scanf("%d",&ch);
    }while(ch==1);
}
