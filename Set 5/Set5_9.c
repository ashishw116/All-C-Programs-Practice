//WAP to illustrate the use of comma operator in swapping of two integers.
#include <stdio.h>
void main()
{
    int a,b;
    printf("Enter 2 number=");
    scanf("%d%d",&a,&b);
    printf("\nBefore Swap A=%d B=%d",a,b);
    a=a+b,b=a-b,a=a-b;
    printf("\nAfter Swap A=%d B=%d",a,b);
}
