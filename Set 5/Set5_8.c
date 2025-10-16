//WAP to illustrate the use of shortcut of assignment operator for all bitwise operations.
#include <stdio.h>
void main()
{
    int a,b;
    printf("Enter 2 number=");
    scanf("%d%d",&a,&b);
    printf("\n A=%d B=%d",a,b);
    int a1=a;
    int b1=b;
    a1 &= b1;
    printf("\nAfter a &= b: a = %d\n", a1);
    a1 = a;
    b1 = a;
    a1 |= b1;
    printf("\nAfter a |= b: a = %d\n", a1);
    a1 = a;
    b1 = a;
    a1 ^= b1;
    printf("\nAfter a ^= b: a = %d\n", a1);
    a1 = a;
    a1 <<= 1;
    printf("\nAfter a <<= 1: a = %d\n", a1);
    a1 = a;
    a1 >>= 1;
    printf("n\After a >>= 1: a = %d\n", a1);
}
