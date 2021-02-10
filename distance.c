//WAP to find the distance between two point using 4 functions.
#include<stdio.h>
#include<math.h>
int point1(int* x1, int* y1);
int point2(int* x2, int* y2);
float distance(int x1, int y1, int x2, int y2);
int main() //1st function
{
  	int x1,y1,x2,y2;
  	float d;
  	point1(&x1,&y1);
  	point2(&x2,&y2);
  	printf("The coordinates of the point1 is: (%d,%d)\n",x1,y1);
  	printf("The coordinates of the point2 is: (%d,%d)\n",x2,y2);
  	d=distance(x1,y1,x2,y2);
  	printf("The distance between the 2 points is: %.2f",d);
  	return 0;
}
int point1(int* x1, int* y1)  //2nd function
{
	int x11,y11;
	printf("Enter the coordinate values of point 1: ");
  	scanf("%d%d",&x11,&y11);
  	*x1=x11;
  	*y1=y11;
}
int point2(int* x2, int* y2)  //3rd function
{
	int x22,y22;
	printf("Enter the coordinate values of point 2: ");
	scanf("%d%d",&x22,&y22);
	*x2=x22;
	*y2=y22;
}
float distance(int x1, int y1, int x2, int y2)  //4th function
{
	float dist;
	dist=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	return dist;
}
