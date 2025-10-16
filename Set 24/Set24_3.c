//Write a program to initialize a String using flower braces  and print the individual characters along with their respective positions.
#include<stdio.h>
void main()
{
    char str[10]={'A','S','H','I','S','H'};
    for(int i=0;str[i]!='\0';i++)
        printf("\n str[%d] in %c",i,str[i]);
}
