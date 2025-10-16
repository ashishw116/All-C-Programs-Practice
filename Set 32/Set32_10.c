//Write a program to find the sum of two complex numbers, where complex numbers are the variables of the union using function.
#include<stdio.h>
union Union
{
    int real,img;
};
typedef union Union complex;
complex getComplex(complex,complex);
void main()
{
    complex c1,c2;
    c1.real=10;
    c2.real=20;
    c1.img=5;
    c2.img=4;
    complex sum=getComplex(c1,c2);
    printf("%d +i %d\n",c1.real,c1.img);
    printf("%d +i %d\n",c2.real,c2.img);
    printf("-----------\n");
    printf("%d +i %d\n",sum.real,sum.img);
}
complex getComplex(complex c1,complex c2)
{
    complex sum;
    sum.real=c1.real,c2.real;
    sum.img=c1.img,c2.img;
    return sum;
}
