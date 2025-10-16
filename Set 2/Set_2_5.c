//Write a program to swap two integers without using third variable & display the result before swapping & after swapping.
#include<stdio.h>
void main()
{
    int a,b;
    printf("\nEnter Value of A: and B:");
    scanf("%d%d",&a,&b);
    printf("\nBefore Swap A:%d B:%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter Swap A:%d B:%d",a,b);
}
