//Write a program to check addresses of an array of elements in ascending order or in descending order.
#include<stdio.h>
void main()
{
    int a[5],*p,f=1;
    p=a;
    printf("\nEnter The Array Elements : ");
    for(int i=0;i<5;i++)
    {
        scanf("%d",p+i);
    }
    printf("\nArray Elements And Addresses : ");
    for(int i=0;i<5;i++)
    {
        printf("%d : %d \n ",*(p+i),(p+i));
    }
    for(int i=0;i<5;i++)
    {
        if((p+i)>(p+i+1))
        {
            f=0;
            break;
        }
    }
    if(f==1)
        printf("\nAddresses of an array of elements in ascending order");
    else
        printf("\nAddresses of an array of elements in descending order");
}
