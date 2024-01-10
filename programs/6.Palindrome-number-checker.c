// Find palindrome no
#include<stdio.h>
int main(){
    
    int input , last_digit , reverse, st ;
    printf("Enter The Palindrome Number To Check: ");
    scanf("%d", & input );
    st = input;
    
    while (input != 0)
    {
        last_digit = input % 10;
        reverse = reverse * 10 + last_digit;
        input = input / 10;
    }
    
    if (st == reverse){
        printf("Given %d is Palindrome " , st );
    }
    else{
         printf("Given %d is not Palindrome " , st );
    }
    
}
