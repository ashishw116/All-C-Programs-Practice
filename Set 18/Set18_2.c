//Write a program to initialize the array individually and print the elements along with their respective positions.
#include<stdio.h>
void main()
{
    int size=3,array[size];
    array[0]=10;
    array[1]=20;
    array[2]=30;
    for(int i=0;i<size;i++)
        printf("\n array[%d] - %d element at %d ",i,array[i],&array[i]);
}
