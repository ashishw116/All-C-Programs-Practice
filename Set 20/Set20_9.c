#include<stdio.h>
int main()
{
    int n=3;
    int queue[n],ind=-1;
    do
    {
        printf("\nMenu \n1 : Push \n2 : Pop \n3 : Display \n4 : Exit");
        int choice;
        printf("\nEnter Your Choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 :
                if(ind<n-1)
                {
                    int ele;
                    printf("\nEnter The Element To Push : ");
                    scanf("%d",&ele);
                    queue[++ind]=ele;
                    printf("\n%d Element Pushed.",ele);
                }
                else
                {
                    printf("\nQueue is Full");
                }
                break;
            case 2 :
                if(ind!=-1)
                {
                    printf("\nPoped Element Is : %d",queue[0]);
                    ind--;
                    for(int i=0;i<=ind;i++)
                        queue[i]=queue[i+1];
                }
                else
                {
                    printf("\nQueue is Empty");
                }
                break;
            case 3 :
                if(ind!=-1)
                {
                    printf("\nQueue :");
                    for(int i=0;i<=ind;i++)
                    printf(" %d",queue[i]);
                }
                else
                {
                    printf("\nQueue is Empty");
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
