//Write a program which takes number of millimeter and converts them into meters, feet, inches, centimeter and then millimeter.
#include<stdio.h>
void main()
{
    int millimeters,meters,feets,inches,centimeters;
    printf("Enter Millimeter=");
    scanf("%d",&millimeters);
    meters=millimeters/1000;
    int rem1=millimeters%1000;
    feets=rem1/300;
    int rem2=rem1%300;
    inches=rem2/25;
    int rem3=rem2%25;
    centimeters=rem3/10;
    millimeters=rem3%10;
    printf("Meters=%d Feets=%d Inches=%d Centimeters=%d Millimeters=%d",meters,feets,inches,centimeters,millimeters);
}
