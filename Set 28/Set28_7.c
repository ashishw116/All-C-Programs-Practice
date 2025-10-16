//Write a program to find the Pearson Correlation between the Age and the salary for the given Data in two arrays.
#include<stdio.h>
#include<math.h>
void main()
{
    int x[10]={18,25,57,45,26,64,37,40,24,33};
    int y[10]={150,290,680,520,320,800,410,450,260,330};
    int sumx=0,sumy=0,sumxy=0,sumx2=0,sumy2=0;
    for(int i=0;i<10;i++)
    {
        sumx+=x[i];
        sumy+=y[i];
        sumxy+=(x[i]*y[i]);
        sumx2+=(x[i]*x[i]);
        sumy2+=(y[i]*y[i]);
    }
    printf("Sumx= %d \nSumy= %d\nSumxy= %d\nSumx2= %d\nSumy2= %d",sumx,sumy,sumxy,sumx2,sumy2);
    float nr=(float)sumxy-((sumx*sumy)/10);
    float de=(float)(sqrt((sumx2-(pow(sumx,2)/10)))*sqrt((sumy2-(pow(sumy,2)/10))));
    float pc=nr/de;
    printf("\n Pearson Correlation between the Age and the salary : %f",pc);

}
