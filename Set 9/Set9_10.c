//Write a program to check whether a given character is Vowel or Consonant.
#include<stdio.h>
void main()
{
    printf("Enter Character= ");
    char c=getchar();
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
    {
        printf("%c is Vowel",c);
    }
    else
    {
        printf("%c is Consonant",c);
    }
}
