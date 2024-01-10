#include<stdio.h>
int main(){
    int input , last_digit , reverse ;
    printf("Enter the number to Reverse: ");
    scanf("%d", & input);
    
    while (input != 0)
    {
        last_digit = input % 10;
        reverse = reverse * 10 + last_digit;
        input = input / 10;
    }
    printf("Enter the  Reverse number is : %d " , reverse );
    
    
}