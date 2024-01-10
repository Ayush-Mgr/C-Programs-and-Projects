#include<stdio.h>

int main() {
    int first_No, Second_No;
    char opr;

    printf("Enter The First and Second Number:\n ");
    scanf("%d%d", &first_No, &Second_No);

    printf("Enter The function +,-,*,/,% :\n ");
    scanf(" %c", &opr);
    
    
    switch ( opr )
{
    case '+':
      printf("%d",first_No+Second_No);
      break;
    case '-':
      printf("%d",first_No-Second_No);
      break;
    case '*':
      printf("%d",first_No*Second_No);
      break;
    case '/':
      printf("%d",first_No/Second_No);
      break;
    case '%':
      printf("%d",first_No%Second_No);
      break;
   
}
return 0 ;
    
}
