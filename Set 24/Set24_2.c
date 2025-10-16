//Write a program to initialize a String individually and print the individual characters along with their respective positions.
#include<stdio.h>
void main()
{
    char str[10];
    str[0]='A';
    str[1]='S';
    str[2]='H';
    str[3]='I';
    str[4]='S';
    str[5]='H';
    for(int i=0;str[i]!='\0';i++)
        printf("\n str[%d] is %c",i,str[i]);
}
