#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
}*head,*second,*temp;

void InsertHead(struct node* second){
    second->next = head;
    head = second ;  

}


int main(){ 
    char opt;
    head = 0;
    do
    {
        
        second = (struct node *)malloc(sizeof(struct node));
        printf("\ninput the data:\n ");
        scanf("%d",&second->data);
        second->next = NULL;
        if (head == 0)
        {
            head = second ;
            temp = second ;
        }
        else{
            printf("\t at Head (H) Or continue (c):\n ");
            scanf(" %c",&opt);
            if (opt == 'H')
            {
                InsertHead(second);
            }
            else if(opt == 'C'){
            

            temp->next = second; // temp has the existing value of previous Second and it gives the previous second.next the pointer value of next second
                                 
            temp = second; //now temp is set to recently created second with second.next null 
         }
        }
        printf("\tcontine Y:\n ");
        printf("\texit N:\n ");
        scanf(" %c",&opt);
        
        
    } while (opt != 'N');
    temp= head;
    int i =0 ;
    while (temp != NULL)
    {      i++;
        struct node* to_free = temp;
        printf("\n%d data is  %d",i,temp->data);
        temp = temp->next;
        free(to_free);
    }
    
    return 0;
}







/*output: 

input the data:
 12
        contine Y:
        exit N:
 Y

input the data:
 23
         at Head (H) Or continue (c):
 H
        contine Y:
        exit N:
 Y

input the data:
 33
         at Head (H) Or continue (c):
 C
        contine Y:
        exit N:
 N

1 data is  23
2 data is  12
3 data is  33
*/





