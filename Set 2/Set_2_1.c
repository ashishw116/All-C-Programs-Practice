//Write a program to find the average of the marks obtained in subject mathematics, chemistry and physics.
#include<stdio.h>
void main()
{
    int mathematics,chemistry,physics;
    printf("Enter Marks of mathematics, chemistry and physics:");
    scanf("%d%d%d",&mathematics,&chemistry,&physics);
    float average=(float)(mathematics+chemistry+physics)/300*100;
    printf("\nAverage is:%f",average);
}
