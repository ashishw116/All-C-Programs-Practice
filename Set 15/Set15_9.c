/*Write a program to get the following output
        1
      3 3
    5 5 5
  7 7 7 7
9 9 9 9 9
*/
#include<stdio.h>
void main()
{
    int n=5,p=1;
    for(int i=1;i<=n;i++)
    {
        for(int s=n;s>i;s--)
        {
            printf("  ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("%d ",p);
        }
        p+=2;
        printf("\n");
    }
}

