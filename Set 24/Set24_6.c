//Write a program to accept a String and count number of Vowels in it.
#include<stdio.h>
void main()
{
    char str[20];
    printf("\n Enter string :");
    scanf("%s",str);
    int c=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
            c++;
    }
    printf("\nVowels Count=%d",c);
}
