//Write a program to count number of Prime numbers of an array using function, where array is the data member of a structure.
#include<stdio.h>
struct dt
{
    int arr[5];
};
typedef struct dt data;
int getPrimeCount(data d);
void main()
{
    data d;
    printf("Enter Element of array :");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&d.arr[i]);
    }
    printf("\nPrime Numbers in Array : %d",getPrimeCount(d));
}
int getPrimeCount(data d)
{
    int c=0;
    for(int i=0;i<5;i++)
    {
        int f=1;
        for(int j=2;j<d.arr[i];j++)
        {
            if(d.arr[i]%j==0)
            {
                f=0;
                break;
            }
        }
        if(f==1)
            c++;
    }
    return c;
}
