#include<stdio.h>
#include<math.h>

int main()
{
	int original,reversed=0,a,b,i=0;
	
	printf("Enter original number: \n");
	scanf("%d",&original);
	
	for(a=original;a>0;a=a/10,i++)
	{
		b=a%10;
		reversed=reversed*10+b;
	}
	
	printf("The reversed number is: %d",reversed);
	
    if(original==reversed)
    {
        printf("It is a palindrome");
    }
    else{
        printf("it is not");
    }
	return 0;
}