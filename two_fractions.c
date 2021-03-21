//WAP to find the sum of two fractions.
#include<stdio.h>
int lcm_func(int n1, int n2);
typedef struct Fractions
{
	int num;
	int den;
}Fractions;
Fractions input_fraction1()
{
	struct Fractions f1;
	printf("Enter the numerator and denominator fraction 1:");
	scanf("%d%d",&f1.num,&f1.den);
	return f1;
}
Fractions input_fraction2()
{
    struct Fractions f2;
    printf("Enter the numerator and denominator of fraction 2: ");
    scanf("%d%d",&f2.num,&f2.den);
    return f2;
}
int main()
{
	struct Fractions frac1,frac2;
    	struct Fractions res,final_frac;
    	//void add(Fractions fraction1,Fractions fraction2);
	frac1=input_fraction1();
	frac2=input_fraction2();
	printf("The fraction 1 is: %d/%d",frac1.num,frac1.den);
	printf("The fraction 2 is: %d/%d",frac2.num,frac2.den);
	struct Fractions add(Fractions fraction1,Fractions fraction2);
            res=add(frac1,frac2);
    	//printf("The sum of 2 fractions is:%d/%d",res.num,res.den);
            void display(Fractions frac1, Fractions frac2, Fractions result);
    	display(frac1,frac2,res);
	return 0;
}
Fractions add(Fractions fraction1,Fractions fraction2)
{
    struct Fractions result,a;
    int l,gcd;
    if(fraction1.den==fraction2.den) //like fractions
    {
        int n,d;
        n=(fraction1.num+fraction2.num);
        d=(fraction1.den);
        printf("\nThe sum of 2 fractions are: %d/%d",n,d);
        l=lcm_func(n,d);
        gcd=(n*d)/l;
        a.num=n;
        a.den=d;
        Fractions result={(a.num/gcd),(a.den/gcd)};
        return result;
    }    
    else  //unlike fractions
    {
        if(fraction2.den%fraction1.den==0 || fraction1.den%fraction2.den==0)  
//if denominator 1 is the multiple of denominator 2 or vice versa
       {
           		int q,tot_num,tot_den;
           		if(fraction1.den>fraction2.den)
           		{
               		q=(fraction1.den/fraction2.den);
               		tot_num=(fraction2.num*q)+fraction1.num; 
               		tot_den=fraction1.den;
               		printf("The sum of the 2 fractions is: %d/%d",tot_num,tot_den);
               		l=lcm_func(tot_num,tot_den);
               		a.num=tot_num;
               		a.den=tot_den;
               		gcd=(a.num*a.den)/l;
               		Fractions final={(a.num/gcd),(a.den/gcd)};
               		return final;
           		}
           		else
           		{
               		q=(fraction2.den/fraction1.den);
               		tot_num=(fraction1.num*q)+fraction2.num;
               		tot_den=fraction2.den;
               		printf("The sum of the 2 fractions is: %d/%d",tot_num,tot_den);
               		l=lcm_func(tot_num,tot_den);
               		a.num=tot_num;
               		a.den=tot_den;
               		gcd=(a.num*a.den)/l;
               		Fractions final={(a.num/gcd),(a.den/gcd)};
               		return final;
           		}
           
       	}
       	else  //when one denominator is NOT a multiple of the other
       	{
           		int tot_den,num;
          		 tot_den=fraction1.den*fraction2.den;
           		num=(fraction1.num*fraction2.den)+(fraction2.num*fraction1.den);
           		printf("The sum of the 2 fractions is: %d/%d",num,tot_den);
           		a.num=num;
           		a.den=tot_den;
           		l=lcm_func(num,tot_den);
           		gcd=(a.num*a.den)/l;
           		Fractions final={(a.num/gcd),(a.den/gcd)};
           		return final;
       	}
    }
}
int lcm_func(int n1, int n2)
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
void display(Fractions frac1,Fractions frac2,Fractions result)
{
    
    printf("\nThe simplified form of %d/%d and %d/%d is: %d/%d",frac1.num,frac1.den,frac2.num,frac2.den,result.num,result.den);
    
}
