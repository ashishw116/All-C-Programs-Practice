#include<stdio.h>
int main()
{
    int n=10;
    int stack[n],top=-1;
    do
    {
        printf("\nMenu \n1 : Push \n2 : Pop \n3 : Display \n4 : Exit");
        int choice;
        printf("\nEnter Your Choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 :
                if(top<n-1)
                {
                    int ele;
                    printf("\nEnter The Element To Push : ");
                    scanf("%d",&ele);
                    stack[++top]=ele;
                    printf("\n%d Element Pushed.",ele);
                }
                else
                {
                    printf("\nStack is Full");
                }
                break;
            case 2 :
                if(top!=-1)
                {
                    printf("\nPoped Element Is : %d",stack[top--]);
                }
                else
                {
                    printf("\nStack is Empty");
                }
                break;
            case 3 :
                if(top!=-1)
                {
                    printf("\nStack :");
                    for(int i=0;i<=top;i++)
                    printf(" %d",stack[i]);
                }
                else
                {
                    printf("\nStack is Empty");
                }
                break;
            case 4 :
                return 0;
            default :
                printf("Invalid Choice!!!!");
                break;
        }
    }while(1);
    return 0;
}
