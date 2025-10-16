/*Write a program to get the following output
* * * * *
  * * * *
    * * *
      * *
        *
*/
#include<stdio.h>
void main()
{
    int n=5;
    for(int i=1;i<=n;i++)
    {
        for(int s=1;s<i;s++)
        {
            printf("  ");
        }
        for(int j=n;j>=i;j--)
        {
            printf("* ");
        }
        printf("\n");
    }
}
