//WAP to find the sum of n fractions.
typedef struct 
{
    int num;
    int den;
} Fractions;

int input_n_value()
{
    int n;
    printf("Enter the number of fractions");
    scanf("%d",&n);
    return n;
}
int GCD(int x, int y)
{
	if(y==0)
		return x;
	return GCD(y,x%y);
}
Fractions add_2_fractions(Fractions f1, Fractions f2)
{
    
    Fractions temp;
	temp.den=(f1.den*f2.den);
	temp.num= (f1.num * f2.den) + (f2.num * f1.den); 
	int gcd=GCD(temp.num,temp.den);
	temp.num/=gcd;
	temp.den/=gcd;
	return temp;
    
}

Fractions add_n_fractions(int n, Fractions f[n])
{
    Fractions result;
    result.num=0;
    result.den=1;
    int i;
    for(i=0;i<n;i++)
    {
        result=add_2_fractions(result,f[i]);
    }
    return result;
}
void display_values(int n, Fractions f[n])
{
    int i;
    printf("\nThe fractions to be added are: ");
    for(i=0;i<n;i++)
    {
        printf("%d/%d ",f[i].num,f[i].den);
    }
}

void print_values(int n, Fractions f[n], Fractions result)
{
    int i;
    printf("\nThe fractions to be added are: ");
    for(i=0;i<n;i++)
    {
        printf("%d/%d ",f[i].num,f[i].den);
    }
    printf("The sum is: %d/%d",result.num,result.den);
}
void input_fractions(int n, Fractions f[n])
{
    //struct Fractions f[n];
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter the numerator and denominator of fraction %d: ",i+1);
        scanf("%d%d",&f[i].num,&f[i].den);
    }
}
int main()
{
    int n;
    //struct Frac res;
    n=input_n_value();
    Fractions f[n];
    Fractions result;
    input_fractions(n,f);
    display_values(n,f);
    result=add_n_fractions(n,f);
    print_values(n,f,result);
    //display_values(f1,n);
    //res=add_fractions(f1,n);
    //printf("The sum of %d fractions is: %d/%d",n,res.tot_num,res.tot_den);
    return 0;
}
