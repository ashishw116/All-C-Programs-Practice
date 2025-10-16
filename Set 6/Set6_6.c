//Write a program to accept the co efficient of a quadratic equation like a,b and c and then find the Discriminant ( disc= ( b*b)- 4*a*c). And display the type of the roots
#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter Co-efficient of a quadratic equation = ");
    scanf("%d%d%d",&a,&b,&c);
    int disc=(b*b)-4*a*c;
    disc>0?printf("\nRoots Are Real")
    :disc<0?printf("\nRoots Are Imaginary"):printf("\nRoots Are Equal");
}
