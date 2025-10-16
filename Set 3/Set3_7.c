#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c,x,y;
    printf("Enter a,b,c,x,y=");
    scanf("%d%d%d%d%d",&a,&b,&c,&x,&y);
    int result=pow((1/(a+b+c)),(1/(x+y)));
    printf("\nResult=%d",result);
}
