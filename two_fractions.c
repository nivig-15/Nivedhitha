//WAP to find the sum of two fractions.
#include<stdio.h>
int lcm_of_2_nos(int n1, int n2);
void simplified_form(int tot_num, int denominator);
struct Fractions
{
	int num1;
  int num2;
  int den1;
  int den2;
};
int main()
{
	struct Fractions numerator, denominator;
  void add_fractions(struct Fractions numerator, struct Fractions denominator);
	printf("Enter the numerator and denominator of fraction 1 (proper fractions): ");
	scanf("%d%d",&numerator.num1,&denominator.den1);
	printf("Enter the numerator and denominator of fraction 2 (proper fractions): ");
	scanf("%d%d",&numerator.num2,&denominator.den2);
	printf("\nThe fractions to be added are: %d/%d and %d/%d",numerator.num1,denominator.den1,numerator.num2,denominator.den2);
	add_fractions(numerator,denominator);
  return 0;
}
void add_fractions(struct Fractions n, struct Fractions d)
{

	if(d.den1==d.den2)
	{
	  int tot=0,den_like;
  	printf("\nThe 2 fractions are like fractions that are %d/%d and %d/%d",n.num1,d.den1,n.num2,d.den2);
	  tot=n.num1+n.num2;
	  printf("\nThe sum of the 2 like fractions is: %d/%d",tot,d.den1);
	  den_like=d.den1;
	  simplified_form(tot,den_like);
  }
  else
  {
	  int lcm;
    printf("\nThe 2 fractions are unlike fractions that are %d/%d and %d/%d",n.num1,d.den1,n.num2,d.den2);
    int lcm_func(struct Fractions d);
    lcm=lcm_func(d);
    if(d.den2%d.den1==0)
    {
	      int q,tot_num;
	      if(d.den1>d.den2)
        {
		        q=d.den1/d.den2;
		        tot_num=(n.num2*q)+n.num1;
		        printf("\nThe sum of the 2 unlike fractions is: %d/%d",tot_num,lcm);
		        simplified_form(tot_num,lcm);
        }
        else
        {
	          q=d.den2/d.den1;
		        tot_num=(n.num1*q)+n.num2;
	          printf("\nThe sum of the 2 unlike fractions is: %d/%d",tot_num,lcm);
		        simplified_form(tot_num,lcm);

        }
    }
    else
    {
	    int tot_den,num;
	    tot_den=d.den1*d.den2;
	    num=(n.num1*d.den2)+(n.num2*d.den1);
	    printf("\nThe sum of the 2 unlike fractions is: %d/%d",num,tot_den);
	    simplified_form(tot_num,lcm);
    }
	
  }
}
int lcm_func(struct Fractions d)
{
	
	int lcm;
	if(d.den1>d.den2)
  {
		lcm=d.den1;
  }
  else
  {
	  lcm=d.den2;
  }
  while(d.den1!=0 && d.den2!=0)
  {
	    if(lcm%d.den1==0 && lcm%d.den2==0)
	    {
		    return lcm;
      }
      lcm++;
  }
}
void simplified_form(int tot_num, int denominator)
{
	int q1,q2,l,gcd;
	l=lcm_of_2_nos(tot_num,denominator);
	gcd=(tot_num*denominator)/l;
	q1=tot_num/gcd;
	q2=denominator/gcd;
	printf("\nThe simplified form is: %d/%d",q1,q2);
}
int lcm_of_2_nos(int n1, int n2)
{
	int lcm;
	if(n1>n2)
  {
		lcm=n1; 
  }
  else
  {
	  lcm=n2;
  }
  while(n1!=0 && n2!=0) 
  {
	  if(lcm%n1==0 && lcm%n2==0)
	  {
		  return lcm;
    }
    lcm++;
  }
}
