//Write a program to declare a structure and a union with one integer and one float data members in each to find their respective variable size.
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
    Structure s;
    Union u;
    printf("Size of structure : %d\n",sizeof(s));
    printf("Size of union : %d",sizeof(u));
}
