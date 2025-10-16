//Write a program to accept the co efficient of a quadratic equation like a,b and c and then find the Discriminant ( disc= ( b*b)- 4*a*c). And display the type of the roots
#include<stdio.h>
void main()
{
    int a,b,c,disc;
    printf("Enter co-efficent of quadratic equation=");
    scanf("%d%d%d",&a,&b,&c);
    disc=(b*b)-4*a*c;
    if(disc>0)
        printf("\n Roots are Real");
    else if(disc<0)
        printf("\n Roots are Imaginary");
    else
        printf("\n Roots are Equal");
}
