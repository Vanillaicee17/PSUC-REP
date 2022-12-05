//Write a program to check whether the given number is Armstrong or not. An Armstrong 

//number of three digits is an integer such that the sum of the cubes of its digits is equal to 

//the number itself. For example, 371 is an Armstrong number since 33 + 73 + 13 = 371

#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c,sum=0;
    
    printf("Enter number");
    scanf("%d", &a);
    int original=a;
    for(a=a;a>0;a=a/10)
    {
        b=a%10;
        
        c=pow(b,3);
        sum=sum+c;

    }
    
    if(original==sum){
        printf("it is armstrong number");
    }
    else{
        printf("It is not");
    }

}
