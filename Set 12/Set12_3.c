//Wrtie a program to print 1,4,9,16.25,36,49,64,81,100.
#include<stdio.h>
void main()
{
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        printf("\n %d",i*i);
}
