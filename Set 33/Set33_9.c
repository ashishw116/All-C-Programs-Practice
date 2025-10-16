//Write a program to find the biggest and smallest element of the array using Pointers
#include<stdio.h>
void main()
{
    int a[5],*p,*psmall,*pbig;
    p=a;
    psmall=a;
    pbig=a;
    printf("\nEnter The Array Elements : ");
    for(int i=0;i<5;i++)
    {
        scanf("%d",p+i);
    }
    for(int i=0;i<5;i++)
    {
        if((*psmall)>(*(p+i)))
        {
            psmall=p+i;
        }
        if((*pbig)<(*(p+i)))
        {
            pbig=p+i;
        }
    }
    printf("Smallest : %d , Biggest : %d",*psmall,*pbig);
}
