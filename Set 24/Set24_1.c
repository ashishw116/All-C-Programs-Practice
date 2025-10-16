//Write a program to accept a String from the user and print the individual characters along with their respective positions.
#include<stdio.h>
void main()
{
    char str[10];
    printf("Enter The String :");
    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++)
    {
        printf("\n str[%d] is %c",i,str[i]);
    }
}
