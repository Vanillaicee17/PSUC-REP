#include<stdio.h>
#include<math.h>

int main()
{
	int binary,decimal=0,a,b,i=0;
	
	printf("Enter binary number: \n");
	scanf("%d",&binary);
	
	for(a=binary;a>0;a=a/10,i++)
	{
		b=a%10;
		decimal=decimal+(b*(pow(2,i)));
	}
	
	printf("The decimal number is: %d",decimal);
	
	return 0;
}