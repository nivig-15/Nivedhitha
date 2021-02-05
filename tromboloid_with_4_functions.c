//WAP to find the volume of a tromboloid using 4 functions.
#include<stdio.h>
void get_inputs(float h, float d, float b);
void compute_vol(float h, float d, float b);
void display_vol(float volume);

void main()  //1st function
    {
        float h,d,b;
        get_inputs(h,d,b);
    }

void get_inputs(float h, float d, float b)  //2nd function
    {
        printf("Enter the height of the tromboloid: ");
        scanf("%f",&h);
        printf("Enter the depth of the tromboloid: ");
        scanf("%f",&d);
        printf("Enter the breadth of the tromboloid: " );
        scanf("%f",&b);
        compute_vol(h,d,b);
    }

void compute_vol(float h, float d, float b)  //3rd function
    {
        float vol;
        vol=(0.33)*((h*b*d)+(d/b));
        display_vol(vol);
    }
    
void display_vol(float volume)  //4th function
    {
        printf("The volume of the trombolid is: %.2f", volume);
    }
