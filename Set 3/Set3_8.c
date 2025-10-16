#include<stdio.h>
#include<math.h>
void main()
{
    int m,n,p,a,b,c,x,y;
    printf("Enter m,n,p,a,b,c,x,y=");
    scanf("%d%d%d%d%d%d%d%d",&m,&n,&p,&a,&b,&c,&x,&y);
    int result=(pow((sqrt((m+n+p))),(x+y)))/(((a+b+c)/(m+n)));
    printf("\nResult=%d",result);
}
