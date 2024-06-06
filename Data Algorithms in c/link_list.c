#include <stdio.h>
#include <stdlib.h>


struct node
{
    int data;
    struct node* next;
}*head,*second,*temp;

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

            temp->next = second;

            temp = second;
        }
        printf("contine Y/N:\n ");
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
contine Y/N:
 Y

input the data:
 33
contine Y/N:
 Y

input the data:
 32
contine Y/N:
 Y

input the data:
 11
contine Y/N:
 N

1 data is  12
2 data is  33
3 data is  32
4 data is  11

*/





