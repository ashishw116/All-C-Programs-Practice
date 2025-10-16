//Write a program to Check whether a given array is Sorted in Ascending order or not.
#include<stdio.h>
void main()
{
    int size;
    printf("\n Enter The Size Of array:");
    scanf("%d",&size);
    int a[size],f=1;
    printf("\n Enter The Element of array:");
    for(int i=0;i<size;i++)
        scanf("%d",&a[i]);
    printf("\n Entered array:");
    for(int i=0;i<size;i++)
        printf("%d ,",a[i]);
    for(int i=0;i<size;i++)
        if(!(a[i]<a[i+1]))
        {
            f=0;
            break;
        }
    if(f==1)
        printf("\n Entered array is Sorted in Ascending order");
    else
        printf("\n Entered array is Not Sorted in Ascending order");
}
