//Write a program to illustrate the use of dynamic memory allocation for an array to find biggest and smallest element of the array elements.
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,*p;
    printf("Enter the size of array :");
    scanf("%d",&n);
    p=malloc(n*sizeof(int));
    printf("Enter the Array element : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    int *big=p,*small=p;
    for(int i=0;i<n;i++)
    {
        if(*big<(*(p+i)))
        {
            big=(p+i);
        }
        if(*small>(*(p+i)))
        {
            small=(p+i);
        }
    }
    printf("Biggest : %d , Smallest : %d ",*big,*small);
}
