//Write a program to find mean and standard deviation of n numbers.
#include<stdio.h>
#include<math.h>
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
    float sum=0,m=0,d=0;
    for(int i=0;i<size;i++)
        sum+=a[i];
    m=sum/size;
    float v=0;
    for(int i=0;i<size;i++)
        v+=pow((a[i]-m),2);
    d=sqrt(v/size);
    printf("\n mean=%f and standard deviation=%f ",m,d);
}
