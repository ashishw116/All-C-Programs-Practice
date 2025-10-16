//write a program to find the average of First N numbers
#include<stdio.h>
void main()
{
    int n,sum=1,avg;
    printf("Enter number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        sum+=i;
    avg=sum/n;
    printf("\Average = %d",avg);
}
