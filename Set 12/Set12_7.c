//Write a program to print the numbers from 567 to 134 which are divisible 9 and not by 6.
#include<stdio.h>
void main()
{
    for(int i=567;i>=134;i--)
        if(i%9==0&&i%6!=0)
        printf("\n %d",i);
}
