//Write a program to check whether a given character is an uppercase character or lowercase character. (Use ASCII Value)
#include<stdio.h>
void main()
{
    printf("Enter Character= ");
    char c=getchar();
    int ascii=(int)c;
    if(ascii>=65 && ascii<=90)
        printf("\n%c is uppercase",c);
    else if(ascii>=97 && ascii<=122)
        printf("\n%c is lowercase",c);
    else
        printf("\n%c is Unknown",c);
}
