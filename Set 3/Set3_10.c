#include<stdio.h>
#include<math.h>
void main()
{
    int m,n,a,x,y,t,k;
    printf("Enter m,n,a,x,y,t,k=");
    scanf("%d%d%d%d%d%d%d",&m,&n,&a,&x,&y,&t,&k);
    float nominator=pow((x+y),(m*n));
    float value1=sqrt(2+8*a);
    int value2=abs(t)*abs(k);
    float denominator=value1*value2;
    float result=nominator/denominator;
    printf("\nResult=%f",result);
}
