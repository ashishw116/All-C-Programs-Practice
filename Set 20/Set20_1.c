//Write a program to find common elements between two arrays.
#include<stdio.h>
void main()
{
    int size1,size2;
    printf("\nEnter Size of 2 Array :");
    scanf("%d%d",&size1,&size2);
    int array1[size1],array2[size2];
    printf("\nEnter 1st Array Element :");
    for(int i=0;i<size1;i++)
        scanf("%d",&array1[i]);
    printf("\nEnter 2nd Array Element :");
    for(int i=0;i<size2;i++)
        scanf("%d",&array2[i]);
    printf("\n1st Array Element is :");
    for(int i=0;i<size1;i++)
        printf("%d ,",array1[i]);
    printf("\n2nd Array Element is :");
    for(int i=0;i<size2;i++)
        printf("%d ,",array2[i]);
     printf("\nCommon Elements Are : ");
    for(int i=0;i<size1;i++)
        for(int j=0;j<size2;j++)
            if(array1[i]==array2[j])
                printf("%d ,",array1[i]);
}
