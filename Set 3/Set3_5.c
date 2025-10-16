#include<stdio.h>
#include<math.h>
void main()
{
    int m,n,x,y,z;
    printf("Enter Values of m, n, x, y, z=");
    scanf("%d%d%d%d%d",&m,&n,&x,&y,&z);
    int result=pow((m+n),(x+y+z));
    printf("\nResult=%d",result);
}
