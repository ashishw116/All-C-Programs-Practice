/*Write a program to get the following output
        *
      * *
    * * *
  * * * *
* * * * *
*/
#include<stdio.h>
void main()
{
    int n=5;
    for(int i=1;i<=n;i++)
    {
        for(int s=n;s>=i;s--)
        {
            printf("  ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
