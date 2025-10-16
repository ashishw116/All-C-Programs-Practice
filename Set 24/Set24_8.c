//Write a program to accept a String and count number of Special Symbol in it.
#include<stdio.h>
void main()
{
    char spacial_symbol[6]={'@','#','$','&','^','*'};
    char str[20];
    printf("\n Enter string :");
    scanf("%[^\n]",str);
    int c=0;
    for(int i=0;spacial_symbol[i]!='\0';i++)
    {
        for(int j=0;str[j]!='\0';j++)
        if(spacial_symbol[i]==str[j])
        {
            c++;
        }
    }
    printf("\nSpecial Symbol Count=%d",c);
}
