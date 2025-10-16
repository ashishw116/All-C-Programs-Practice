//WAP to illustrate the use of left shift and right shift operators.
#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter 2 number=");
    scanf("%d%d",&a,&b);
    printf("\n A=%d B=%d",a,b);
    printf("\n A>>B=%d",a>>b);
    printf("\n B<<A=%d",b<<a);
}
