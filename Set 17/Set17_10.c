//Write a program to illustrate the use of continue Statement
//EG for skip a even number
#include<stdio.h>
void main()
{
    for(int i=1;i<=10;i++)
    {
        if(i%2==0)
            continue;
        printf("%d ",i);
    }
}
