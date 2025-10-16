//Write a program to create an Array of prime numbers from a given array
#include<stdio.h>
void main()
{
    int size;
    printf("\nEnter Size of Array :");
    scanf("%d",&size);
    int array[size];
    printf("\nEnter Array Element :");
    for(int i=0;i<size;i++)
        scanf("%d",&array[i]);
    printf("\nArray Element is :");
    for(int i=0;i<size;i++)
        printf("%d ,",array[i]);
    int count=0;
    for(int i=0;i<size;i++)
    {
        int element=array[i],flag=1;
        for(int j=2;j<element;j++)
        {
            if(element%j==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
            count++;
    }
    int prime[count],pos=0;
    for(int i=0;i<size;i++)
    {
        int element=array[i],flag=1;
        for(int j=2;j<element;j++)
        {
            if(element%j==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
            prime[pos++]=element;
    }
    printf("\nPrime Array Element is :");
    for(int i=0;i<count;i++)
        printf("%d ,",prime[i]);
}
