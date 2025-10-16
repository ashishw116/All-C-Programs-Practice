//Write a program to find the sum of two complex numbers in function and return the result to main.
#include<stdio.h>
struct complex_num
{
    int real,img;
};
typedef struct complex_num complex;
complex getAddition(complex c1,complex c2);
void main()
{
    complex c1,c2;
    printf("Enter 1st Complex Number Real and Img Part:");
    scanf("%d%d",&c1.real,&c1.img);
    printf("Enter 2nd Complex Number Real and Img Part:");
    scanf("%d%d",&c2.real,&c2.img);
    complex result=getAddition(c1,c2);
    printf("%d + i%d\n%d + i%d\n----------\n%d + i%d",c1.real,c1.img,c2.real,c2.img,result.real,result.img);
}
complex getAddition(complex c1,complex c2)
{
    complex result;
    result.real=c1.real+c2.real;
    result.img=c1.img+c2.img;
    return result;
}
