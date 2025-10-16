#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c;
    printf("Enter a,b,c=");
    scanf("%d%d%d",&a,&b,&c);
    int result=abs(c)+sqrt((pow(a,2)+pow(b,3)));
    printf("\nResult=%d",result);
}
