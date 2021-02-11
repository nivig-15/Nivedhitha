//WAP to find the distance between two points using structures and 4 functions.
#include <stdio.h>
#include<math.h>
struct Distance
{
    int x1;
    int y1;
    int x2;
    int y2;
    float dist;
};

int main()
{
    struct Distance point1,point2;   //structure initialization locally
    void dist_btw_2_pts(struct Distance p1, struct Distance p2);   //structure declaration locally
    printf("Enter the coordinate values of point 1:");
    scanf("%d",&point1.x1);
    scanf("%d",&point1.y1);
    printf("Enter the coordinate values of point 2:");
    scanf("%d",&point2.x2);
    scanf("%d",&point2.y2);
    printf("The coordinates of point 1 is: (%d,%d)\n",point1.x1,point1.y1);
    printf("The coordinates of point 2 is: (%d,%d)\n",point2.x2,point2.y2);
    dist_btw_2_pts(point1,point2);   //function call
    return 0;
}
void dist_btw_2_pts(struct Distance p1, struct Distance p2)
{
    struct Distance d;   //new structure declared to access dist variable inside structure
    d.dist=sqrt(pow(((p2.x2)-(p1.x1)),2)+pow(((p2.y2)-(p1.y1)),2));
    printf("The distance between the 2 points is: %.2f",d.dist);
   
}
