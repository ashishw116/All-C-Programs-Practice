//Write a program to accept an Integer , a floating point number and character from the user and print their respective values and addresses using pointers.
#include<stdio.h>
void main()
{
    int a,*p1=&a;
    float b,*p2=&b;
    char c,*p3=&c;
    printf("Enter integer, float, char :");
    scanf("%d%f %c",p1,p2,p3);
    printf("Integer Address : %d , Value : %d\n",p1,*p1);
    printf("Float Address : %d , Value : %f\n",p2,*p2);
    printf("Char Address : %d , Value : %c\n",p3,*p3);
}
