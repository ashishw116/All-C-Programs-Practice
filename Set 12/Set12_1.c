//Write a program to print your name n Times.
#include<stdio.h>
void main()
{
    char c[]="Ashish";
    int n;
    printf("Enter Number To Print Name=");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        printf("\nName: %s",c);
}
