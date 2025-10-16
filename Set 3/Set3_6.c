#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,x,y;
    printf("Enter a,b,x,y=");
    scanf("%d%d%d%d",&a,&b,&x,&y);
    int result=pow(((a+b)/(x+y)),(1/(x+y)));
    printf("\nResult=%d",result);
}
