#include<stdio.h>

int main()
{
	
	int a,b,c,n,i;
	a=0;b=1,c=a+b;
	
	printf("Enter number of terms: ");
	scanf("%d",&n);
	
	printf("Fibonacci numbers are: \n%d\n%d\n",a,b);
	
	for(i=3;i<=n;i++)
	{
		a=b;
		b=c;
		c=a+b;
		
		printf("%d\n",c);
	}
	
	return 0;
}