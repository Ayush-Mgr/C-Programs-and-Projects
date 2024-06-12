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

void InsertAt(struct node* second,struct node* head,int LinkSize){
    struct node* temp = head;
    int loc , i =1 ;

    printf("\tcurrent size %d \nInput Location :\n",LinkSize);
    scanf("%d",&loc);
    if (loc > LinkSize)
    {
        printf("\tInput Location Exceeds current size %d\n",LinkSize);
        return  ;
    }
    
     if (loc == 1) {
        InsertHead(second);
        return;
    }

     
    while (i < loc)
    {
       temp=temp->next;
       i++;
    }
    second->next = temp->next; // second.next save address front of temp
    temp->next = second; //temp.next saved address of second who has ' address front of temp'
    temp = second; 
    


}


int main(){ 
    char opt;
    head = 0;
    int LinkSize=0;
    do
    {
        LinkSize ++; 
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
            printf("\t at Head (H) / at End  (c) / at Given Location (G) : \n ");
            scanf(" %c",&opt);
            if (opt == 'H')
            {
                InsertHead(second);
            }
            else if(opt == 'C'){
            
            temp->next = second; // temp has the existing value of previous Second and it gives the previous second.next the pointer value of next second
                                 
            temp = second; //now temp is set to recently created second with second.next null 
         }else if (opt == 'G')
         {
            InsertAt(second,head,LinkSize);
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
 22
        contine Y:
        exit N:
 Y

input the data:
 22
         at Head (H) / at End  (c) / at Given Location (G) :
 G
        current size 2
Input Location :
1
        contine Y:
        exit N:
 Y

input the data:
 23
         at Head (H) / at End  (c) / at Given Location (G) :
 G
        current size 3
Input Location :
2
        contine Y:
        exit N:
 Y

input the data:
 44 
         at Head (H) / at End  (c) / at Given Location (G) :
 C
        contine Y:
        exit N:
 Y

input the data:
 77
         at Head (H) / at End  (c) / at Given Location (G) :
 H
        contine Y:
        exit N:
 N

1 data is  77
2 data is  22
3 data is  22
4 data is  44
*/





