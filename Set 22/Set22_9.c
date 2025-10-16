//Write a program to check whether the given matrix is symmetric or not
#include<stdio.h>
void main()
{
    int rows,columns;
    printf("\nEnter Rows And Columns :");
    scanf("%d%d",&rows,&columns);
    if((rows==columns))
    {
       int m[rows][columns];
        printf("\nEnter Elements Of Matrix :");
        for(int i=0;i<rows;i++)
            for(int j=0;j<columns;j++)
                scanf("%d",&m[i][j]);
        printf("\nEntered Matrix :\n");
        for(int i=0;i<rows;i++)
        {

                for(int j=0;j<columns;j++)
                    printf(" %d,",m[i][j]);
                printf("\n");
        }
        int f=1;
        for(int i=0;i<rows;i++)
        {
                for(int j=0;j<columns;j++)
                {
                        if(i!=j&&!(m[i][j]==m[j][i]))
                        {
                            f=0;
                            break;
                        }
                }
                if(f==0)
                    break;
        }
        if(f==1)
            printf("\n matrix is symmetric");
        else
            printf("\n matrix is not symmetric");

    }
    else
        printf("\n Invalid Square matrix!!!");
}
