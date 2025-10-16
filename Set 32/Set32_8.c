//Write a program to illustrate initialization of a structure and union variable.
#include<stdio.h>
struct st
{
    int a;
    float b;
    char name[10];
};
union ut
{
    int a;
    float b;
    char name[10];
};
typedef struct st Structure;
typedef union ut Union;
void main()
{
    Structure s={5,65.5,"Ashish"};
    Union u={74,85.4,"XYZ"};
    printf("Structure  Data : %d, %f, %s\n",s.a,s.b,s.name);
    printf("Union  Data : %d, %f, %s\n",u.a,u.b,u.name);
}
