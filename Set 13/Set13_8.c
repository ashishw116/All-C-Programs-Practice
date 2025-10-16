//Write a program to find the sum following series 1/12+ 1/12 + 1/22+ 1/132 + 1/52+ 1/82+ 1/132+ 1/212+……………n
#include<stdio.h>
#include<math.h>
void main()
{
    int n,fno=1,sno=0;
    float sum;
    printf("Enter number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int temp=fno+sno;
        fno=sno;
        sno=temp;
        sum+=(float)1/pow(temp,2);
    }
    printf("\n Sum=%f",sum);
}
