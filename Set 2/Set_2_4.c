//Write a program to swap two integers & display the result before swapping & after swapping (hint: use third variable).
#include<stdio.h>
void main()
{
    int a,b,temp;
    printf("\nEnter Value of A: and B:");
    scanf("%d%d",&a,&b);
    printf("\nBefore Swap A:%d B:%d",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("\nAfter Swap A:%d B:%d",a,b);
}
