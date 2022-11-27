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