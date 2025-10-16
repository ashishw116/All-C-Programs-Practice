/*Write a program to get the following output
        2
      4 4
    6 6 6
  8 8 8 8
10 10 10 10 10
*/
#include<stdio.h>
void main()
{
    int n=5,p=2;
    for(int i=1;i<=n;i++)
    {
        for(int s=n;s>i;s--)
            printf("  ");
        for(int j=1;j<=i;j++)
            printf("%2d ",p);
        p+=2;
        printf("\n");
    }
}
