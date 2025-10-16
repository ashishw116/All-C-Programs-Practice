//Write a program to print the colors of rainbow using switch case for the given character to the user and ask whether to continue or not.
#include<stdio.h>
void main()
{
    int ch;
    do
    {
        printf("\nEnter First Character of Colors of Rainbow :");
        char choice=getchar();
        switch(choice)
        {
            case 'R' :
                printf("\n Red");
                break;
            case 'O' :
                printf("\n Orange");
                break;
            case 'Y' :
                printf("\n Yellow");
                break;
            case 'G' :
                printf("\n Green");
                break;
            case 'B' :
                printf("\n Blue");
                break;
            case 'I' :
                printf("\n Indigo");
                break;
            case 'V' :
                printf("\n Violet");
                break;
            default :
                printf("\nCharacter is Not a Color of Rainbow");
        }
        printf("\nEnter 1 For Continue, 0 For No : ");
        scanf("%d",&ch);
    }while(ch==1);
}
