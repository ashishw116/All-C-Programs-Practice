//Write a program to initialize the array using flower braces and print the elements along with their respective positions.
#include<stdio.h>
void main()
{
    int array[]={10,20,30};
    for(int i=0;i<3;i++)
        printf("\n array[%d] - %d element at %d ",i,array[i],&array[i]);
}
