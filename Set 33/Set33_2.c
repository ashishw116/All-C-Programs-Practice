//Write a program to find the size of the pointer pointing to the different data types.
#include<stdio.h>
void main()
{
    int *p1;
    float *p2;
    char *p3;
    double *p4;
    printf("Size int : %d \n",sizeof(p1));
    printf("Size float : %d \n",sizeof(p1));
    printf("Size char : %d \n",sizeof(p3));
    printf("Size double : %d \n",sizeof(p4));
}
