//WAP to illustrate the use of shortcut of assignment operator for all arithmetic operations .
#include<stdio.h>
void main()
{
    int a,b,result=0;
    printf("Enter 2 values=");
    scanf("%d%d",&a,&b);
    result+=a;
    printf("Result of result+=%d :%d",a,result);
    result-=b;
    printf("\nResult of result-=%d :%d",b,result);
    result*=a;
    printf("\nResult of result*=%d :%d",a,result);
    result/=b;
    printf("\nResult of result/=%d :%d",b,result);
}
