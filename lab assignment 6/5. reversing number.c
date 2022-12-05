//Write a program to reverse a given number 
//Ex: 1234 reverse=4*10 3 +3 * 10 2 + 2 * 10 1 + 1 * 10 0 =4321

#include<stdio.h>
#include<math.h>

int main()
{
	int original,reversed=0,a,b;
	
	printf("Enter original number: \n");
	scanf("%d",&original);
	
	for(a=original;a>0;a=a/10)
	{
		b=a%10;
		reversed=reversed*10+b;
	}
	
	printf("The reversed number is: %d",reversed);
	
	return 0;
}
