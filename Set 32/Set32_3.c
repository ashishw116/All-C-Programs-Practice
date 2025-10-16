//Write a program to Sort an array of structure in ascending order by passing to a function. Where Structure contains a Single Data member.
#include<stdio.h>
struct dt
{
    int num;
};
typedef struct dt data;
void sortAsc(data d[],int);
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
    sortAsc(d,n);
    printf("\nSort an array of structure in ascending order");
    for(int i=0;i<n;i++)
    {
            printf("%d ",d[i].num);
    }
}
void sortAsc(data d[],int n)
{
    for(int i=0;i<n-1;i++)
    {
            for(int j=i+1;j<n;j++)
            {
                if(d[i].num>d[j].num)
                {
                    int temp=d[i].num;
                    d[i].num=d[j].num;
                    d[j].num=temp;
                }
            }
    }
}
