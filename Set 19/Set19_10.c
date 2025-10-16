//Write a program to merge two given array one after another.
#include<stdio.h>
void main()
{
    int size1=4,size2=3;
    int a[4]={10,20,30,40};
    int b[3]={11,22,33};
    printf("\nFirst Array :");
    for(int i=0;i<size1;i++)
        printf("%d",a[i]);
    printf("\nSecond Array :");
    for(int i=0;i<size2;i++)
        printf("%d",b[i]);
    int size3=size1+size2;
    int c[size3],cpos=0;
    for(int i=0;i<size1;i++)
        c[cpos++]a[i];
    for(int i=0;i<size2;i++)
        c[cpos++]b[i];
    printf("\nArray After Merge :");
    for(int i=0;i<size3;i++)
        printf("%d",c[i]);
}
