//Write a Program to convert number of items into Dozens and remaining units.
#include<stdio.h>
void main()
{
    int items, dozens, remaining;
     printf("Enter No of Items=");
     scanf("%d",&items);
     dozens=items/12;
     remaining=items%12;
     printf("\nDozens=%d Remaining Items=%d",dozens,remaining);
     getch();
}
