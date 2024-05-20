#include <stdio.h>
void push (int stack[] ,int *top , int size ){
    int in ;
    if(*top == size-1){
        printf("the stack is full");
    }
    else{
        printf("enter the input : \n => ");
        scanf("%d",&in);
        (*top)++;
        stack[*top] = in ;
        
        
    }
}
void pop (int stack[] ,int *top ){
     if( *top == -1){
        printf("Stack is empty\n ");
     }else{ 
          if (*top == -1){
              printf("Stack is empty\n "); 
          } else{
          printf(" An element of Stack %d is removed\n ", stack[*top]);
          (*top)--;
              
          }
          
     }
}
void peek (int stack[],int *top, int size){
    if(*top == size-1){
        printf("the stack is full");
    }
    elif (*top == -1){
        printf("Stack is empty\n "); 
        
    }
    else{
     printf("top is %d ",stack[*top] );
    }
}
int main() {
   int stack[100];
   char options,size,x, top= -1 ;
    printf("Enter size of an arrey:\n=> ");
    scanf("%d",&size);
    
   while (options != x ){
       printf("choose \np =>push \nd => pop\n e => peek\n x=> exit ");
       scanf("%c",options);
       
       switch (options)
       
       case 'p':
        push(stack,&top,size);
       case 'd':
        pop(stack,&top);
       case 'e':
        peek(stack,&top,size);
       case 'x':
        options = x;
        
   }
   
   
   
   
    return 0;
}


/* // Online C compiler to run C program online
#include <stdio.h>
void push (int stack[] ,int *top , int size ){
    int in ;
    if(*top == size-1){
        printf("the stack is full");
    }
    else{
        printf("enter the input : \n => ");
        scanf("%d",&in);
        (*top)++;
        stack[*top] = in ;
        
        
    }
}
    void pop (int stack[] ,int *top ){
     if( *top == -1){
        printf("Stack is empty\n ");
     }else{ 
          printf(" An element of Stack %d is removed\n ", stack[*top]);
          (*top)--;
          
     }
}
int main() {
    int stack[100] , top = -1  , size= 10;
    push(stack,&top,size);
    printf("top is %d ",stack[top] );
    pop(stack,&top);
    printf("top is %d ",stack[top] );
    return 0;
}*/



/*#include <stdio.h>
void push (int stack[] ,int *top , int size ){
    int in ;
    if(*top == size-1){
        printf("the stack is full");
    }
    else{
        printf("enter the input : \n => ");
        scanf("%d",&in);
        (*top)++;
        stack[*top] = in ;
        
        
    }
}
    void peek (int stack[],int *top){
     printf("top is %d ",stack[*top] );
}
int main() {
    int stack[100] , top = -1  , size= 10;
    push(stack,&top,size);
    peek(stack,&top);
    
    return 0;
}*/
