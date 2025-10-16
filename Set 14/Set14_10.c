/*Write a program to get the following output
5
5 4
5 4 3
5 4 3 2
5 4 3 2 1
*/
#include<stdio.h>
void main()
{
    int n=5;
    for(int i=n;i>=1;i--)
    {
        for(int j=n;j>=i;j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}
