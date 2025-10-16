//Write a program to print the first n Fibonacci numbers
#include<stdio.h>
void main()
{
    int fno=-1,sno=1,tno,n,c=0;
    printf("Enter Number=");
    scanf("%d",&n);
    while(c<n)
    {
        tno=fno+sno;
        printf(" %d",tno);
        fno=sno;
        sno=tno;
        c++;
    }
}
