// Write a program to accept a String and check whether it is a palindrome or not.
#include<stdio.h>
void main()
{
    char str1[20];
    printf("\n Enter string :");a
    scanf("%s",str1);
    int c=0;
    for(int i=0;str1[i]!='\0';i++)
            c++;
    int f=1;
    for(int i=0,j=c-1;i<c/2;i++,j--)
    {
        if(str1[i]!=str1[j])
        {
            f=0;
            break;
        }
    }
    if(f==1)
        printf("\n Strings are palindrome");
    else
        printf("\n Strings are not palindrome");
}
