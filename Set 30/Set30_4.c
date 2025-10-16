//Write a program to accepts a set of names and arrange them in alphabetically increasing order.
#include<stdio.h>
void main()
{
     char names[20][100],temp[100];
     int n;
     printf("Enter Number Of the Names To Be Entered : ");
     scanf("%d",&n);
     printf("Enter %d Names \n",n);
     for(int i=0;i<n;i++)
        scanf("%s",names[i]);
     for(int i=0;i<n-1;i++)
     {
         for(int j=i+1;j<n;j++)
         {
             if(strcmp(names[i],names[j])>0)
             {
                 strcpy(temp,names[i]);
                 strcpy(names[i],names[j]);
                 strcpy(names[j],temp);
             }
         }
     }
     printf("Sorted Names : \n");
     for(int i=0;i<n;i++)
        printf(" %s\n",names[i]);
}
