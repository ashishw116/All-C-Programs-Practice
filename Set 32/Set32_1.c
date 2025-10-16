//Write a program to reverse an array of structure by passing to a function. Where Structure contains a Single Data member.
#include<stdio.h>
struct dt
{
    int num;
};
typedef struct dt data;
void reverseArray(data d[],int);
void main()
{
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    data d[n];
    printf("Enter Element of array");
    for(int i=0;i<n;i++)
    {
            scanf("%d",&d[i].num);
    }
    printf("\nOriginal array");
    for(int i=0;i<n;i++)
    {
            printf("%d",d[i].num);
    }
    reverseArray(d,n);
    printf("\nReverse array");
    for(int i=0;i<n;i++)
    {
                printf("%d",d[i].num);
    }
}
void reverseArray(data d[],int n)
{
    int j=n-1;
    for(int i=0;i<n/2;i++)
    {
            int temp=d[i].num;
            d[i].num=d[j].num;
            d[j].num=temp;
            j--;
    }
}
