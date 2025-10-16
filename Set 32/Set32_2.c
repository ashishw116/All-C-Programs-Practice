//Write a program to reverse each element of the array of structure by passing to a function. Where Structure contains a Single Data member.
#include<stdio.h>
struct dt
{
    int num;
};
typedef struct dt data;
void reverseElementOfArray(data d[],int);
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
            printf("%d ",d[i].num);
    }
    reverseElementOfArray(d,n);
    printf("\nReverse Element Of array");
    for(int i=0;i<n;i++)
    {
                printf("%d ",d[i].num);
    }
}
void reverseElementOfArray(data d[],int n)
{
    for(int i=0;i<n;i++)
    {
            int n=d[i].num,rev=0;
            while(n>0)
            {
                int rem=n%10;
                rev=rev*10+rem;
                n/=10;
            }
            d[i].num=rev;
    }
}
