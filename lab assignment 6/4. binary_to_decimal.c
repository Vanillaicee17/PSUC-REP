//Write a program to convert the decimal number into binary to decimal. 
//Ex: 1101 = 1*2 3 + 1 * 2 2 + 0 * 2 1+ 1* 2 0 =13 
 
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
