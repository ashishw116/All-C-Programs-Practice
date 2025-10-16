//Write a program to accept two strings and check whether they are equal or not.
#include<stdio.h>
void main()
{
    char str1[20],str2[20];
    printf("\n Enter 2 string :");
    scanf("%s%s",&str1,&str2);
    int size1=0,size2=0;
    for(int i=0;str1[i]!='\0';i++)
            size1++;
    for(int i=0;str2[i]!='\0';i++)
            size2++;
    int f=1;
    if(size1==size2)
    {
        for(int i=0;str1[i]!='\0';i++)
        {
            if(str1[i]!=str2[i])
            {
                f=0;
                break;
            }
        }
        if(f==1)
            printf("\n Strings are equal");
        else
            printf("\n Strings are not equal");
    }
    else
        printf("\n Strings are not equal");
}
