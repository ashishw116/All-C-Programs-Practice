/*Write a program to get the following output
5
4 5
3 4 5
2 3 4 5
1 2 3 4 5
*/
#include<stdio.h>
void main()
{
    int n=5;
    for(int i=n;i>=1;i--)
    {
        for(int j=i;j<=n;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}
