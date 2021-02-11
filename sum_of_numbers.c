//Write a program to find the sum of n different numbers using 4 functions
#include<stdio.h>
//function declarations
void enter_values(int a[], int n);
void sum_of_different_numbers(int a[], int n);
void display_sum(int a[], int n, int s);
int main()   //1st function
{
	int a[20],n;
	printf("Enter how many numbers do you want to sum up (max 20 numbers): ");
	scanf("%d",&n);
	enter_values(a,n);   //function call
  return 0;
}

void enter_values(int a[], int n)   //2nd function
{
	int i;
	printf("Enter the different numbers: ");
	for(i=0;i<n;i++)
	{
    scanf("%d",&a[i]);
  }
sum_of_different_numbers(a,n);  //function call
}
void sum_of_different_numbers(int a[], int n)   //3rd function
{
	int i,sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
  }
	display_sum(a,n,sum);   //function call
}
void display_sum(int a[], int n, int s)   //4th function
{
	int j;
	printf("The %d different numbers are: \n",n);
	for(j=0;j<n;j++)
  {
		printf("%d ",a[j]);
  }
  printf("\nand their sum is: %d",s);
}
