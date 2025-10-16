//Write a program to check an array is sorted in Descending order or not using function, where array is the data member of a structure.
#include<stdio.h>
struct dt
{
    int arr[5];
};
typedef struct dt data;
int isDescending(data d);
void main()
{
    data d;
    printf("Enter Element of array :");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&d.arr[i]);
    }
    printf("\nArray is %sSorted in Descending Order",isDescending(d)==1?"":"Not ");
}
int isDescending(data d)
{
    int f=1;
    for(int i=0;i<4;i++)
    {
        if(d.arr[i]<d.arr[i+1])
        {
            f=0;
            break;
        }
    }
    return f;
}
