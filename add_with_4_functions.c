//Write a program to add two user input numbers using 4 functions.
#include<stdio.h>
int get_num1(int n1);
int get_num2(int n2);
int add(int num1, int num2);

int main()  //1st function
  {
    int num1,num2,s;
    num1=get_num1(num1);
    num2=get_num2(num2);
    s=add(num1,num2);
    printf("The sum of %d and %d is %d",num1,num2,s);
    return 0;
  }

int get_num1(int n1)  //2nd function
  {
    printf("Enter number 1: ");
    scanf("%d",&n1);
    return n1;
  }

int get_num2(int n2)  //3rd function
  {
    printf("Enter number 2: ");
    scanf("%d",&n2);
    return n2;
  }

int add(int num1, int num2)  //4th function
  {
    int sum;
    sum=num1+num2;
    return sum;
  }
