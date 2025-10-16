//Write a program to allocate dynamic memory for int, float and char data types.
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *pint;
    float *pfloat;
    char *pchar;
    pint=malloc(sizeof(int));
    pfloat=malloc(sizeof(float));
    pchar=malloc(sizeof(char));
    printf("Enter Int, Float, Char value \n");
    scanf("%d%f %c",pint,pfloat,pchar);
    printf("Integer value is %d address is %d\n",*pint,pint);
    printf("Float value is %f address is %d\n",*pfloat,pfloat);
    printf("Char value is %c address is %d\n",*pchar,pchar);
}
