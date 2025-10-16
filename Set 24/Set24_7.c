//Write a program to accept a String and count number of Consonants in it.
#include<stdio.h>
void main()
{
    char str[20];
    printf("\n Enter string :");
    scanf("%[^\n]",str);
    int c=0;
    for(int i=0;str[i]!='\0';i++)
    {
        int ascii=(int)str[i];
        if(ascii>=65||ascii<=90&&ascii>=97&&ascii<=122)
        if(str[i]!='a' && str[i]!='e' &&str[i]!='i'&&str[i]!='o'&&str[i]!='u'&&str[i]!='A'&&str[i]!='E'&&str[i]!='I'&&str[i]!='O'&&str[i]!='U')
        {
            c++;
        }
    }
    printf("\nConsonants Count=%d",c);
}
