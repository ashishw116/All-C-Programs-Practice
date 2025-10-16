/*Write a program to get the following output
5 4 3 2 1
5 4 3 2
5 4 3
5 4
5
*/
#include<stdio.h>
void main()
{
    int n=5
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>=i;j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}
