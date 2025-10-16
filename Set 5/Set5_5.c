//WAP to illustrate the use of logical operators.
#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter 2 number=");
    scanf("%d%d",&a,&b);
    printf("\nA = %d, B = %d", a, b);
    printf("\nA < B && A > 0 = %d", (a < b) && (a > 0));
    printf("\nA < B || A > 0 = %d", (a < b) || (a > 0));
    printf("\n!(A < B) = %d", !(a < b));
}
