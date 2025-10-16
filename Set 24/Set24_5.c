//Write a program to find the sum of ASCII values of all the characters of String.
#include<stdio.h>
void main()
{
    char str[100];
    printf("Enter the string :");
    scanf("%[^\n]",str);
    int sum=0;
    for(int i=0;str[i]!='\0';i++)
    {
        char c=str[i];
        sum+=(int)c;
    }
    printf("\nSum of ASCII Values : %d",sum);
}
