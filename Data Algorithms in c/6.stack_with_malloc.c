#include <stdio.h>
#include<stdlib.h>
void push (int** stack ,int *top , int size ){
    int in ;
    if(*top == size-1){
        printf("the stack is full\n");
    }
    else{
        printf("enter the input : \n => ");
        scanf("%d",&in);
        (*top)++;
        (*stack)[*top] = in ;
        
        
    }
}
void pop (int** stack ,int *top ){
     if( *top == -1){
        printf("Stack is empty\n ");
     }else{ 
          if (*top == -1){
              printf("Stack is empty\n "); 
          } else{
          printf(" An element of Stack %d is removed\n ", (*stack)[*top]);
          (*top)--;
              
          }
          
     }
}
void peek (int** stack,int *top, int size){
    if (*top == -1){
        printf("Stack is empty\n "); 
        
    }
    else{
     printf("top is %d ",(*stack)[*top]);
    }
}
int main() {
   int *stack,size,x, top = -1;
   
   stack = (int*) malloc(size*sizeof(int));
   
   char options ;
    printf("Enter size of an arrey:\n=> ");
    scanf("%d",&size);
    
     if (stack == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    
   while (options != 'x' ){
       printf("\nchoose : \np => push \nd => pop\ne => peek\nx => exit \n=> ");
       scanf(" %c",&options);
       
       switch (options){
       
       case 'p':
        push(&stack,&top,size);
        break;
       case 'd':
        pop(&stack,&top);
        break;
       case 'e':
        peek(&stack,&top,size);
        break;
       case 'x':
        options = 'x';
        break;
        
       }
        
   }
   
   
   
   
    return 0;
}


/*
output :

Enter size of an arrey:
=> 2

choose : 
p => push 
d => pop
e => peek
x => exit 
=> p
enter the input : 
 => 12

choose : 
p => push 
d => pop
e => peek
x => exit 
=> e
top is 12 
choose : 
p => push 
d => pop
e => peek
x => exit 
=> d
 An element of Stack 12 is removed
 
choose : 
p => push 
d => pop
e => peek
x => exit 
=> d
Stack is empty
 
choose : 
p => push 
d => pop
e => peek
x => exit 
=> e

Stack is empty
 





*/
