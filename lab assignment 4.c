//Program 8
#include<stdio.h>
void main(){
    
    int x;
    printf("Enter quiz score");
    scanf("%d", &x);
    if (x==9 || x==10){
        printf("A");
        }
    else if (x==8 || x==7){
        printf("B");
        }
    else if (x==5 || x==6){
        printf("C");
    }
    else if (x==3 || x==4){
        printf("");
    }
    else if (x<3){
        printf("F");
    }
    else{
        printf("Invaild");
    }
}
*/
//Program 10
#include<stdio.h>
int main()
{
    char x;
    
    printf("Enter a character");
    scanf("%c", &x);
    int y=x;
    

    if (y>=65 && y<=122){
        if (x=='a'|| x=='A'|| x=='e'|| x=='E' ||x=='i'|| x=='I'||x=='o'|| x=='O'||x=='u'|| x=='U'){
            printf("It is a vowel");
        }
        else{
            printf("Consonant");
        }
    } 
       
    else{
        if (y>=49 && y<=57){
            printf("Is digit ");
        }

    }
}
