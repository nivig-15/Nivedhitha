//Write a program to find the volume of a tromboloid using one function
#include<stdio.h>
void main()
{
float h,d,b,vol;
printf("The height of the tromboloid is: ");
scanf("%f",&h);
printf("The depth of the tromboloid is: ");
scanf("%f",&d)
printf("The breadth of the tromboloid is: ");
scanf("%f",&b);
vol=(0.33)*(h*d*b)+(d/b); //the value of 1/3 is approximately 0.33
printf("The volume of the tromboloid is: %.2f",vol);
}
