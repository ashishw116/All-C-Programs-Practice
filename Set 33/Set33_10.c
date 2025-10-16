//Write a program to sort elements of the array in Ascending order using Pointers
#include<stdio.h>
void main()
{
    int a[5],*p;
    p=a;
    printf("\nEnter The Array Elements : ");
    for(int i=0;i<5;i++)
    {
        scanf("%d",p+i);
    }
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if((*(p+i))>(*(p+j)))
            {
                int temp,*ptemp=&temp;
                *ptemp=(*(p+i));
                (*(p+i))=(*(p+j));
                (*(p+j))=*ptemp;
            }
        }
    }
    printf("\nSorted Array : ");
    for(int i=0;i<5;i++)
    {
        printf("%d, ",*(p+i));
    }
}
