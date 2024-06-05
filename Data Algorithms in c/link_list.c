#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
};

enum options {
    quit,
    add ,
    delete,
    display


}option;
int main()
{   
    printf("Enter command:\n");
    printf("1. Quit\n");
    printf("2. Add\n");
    printf("3. Delete\n");
    printf("4. Display\n");
    scanf("%d",&option);
    
    
    while (option != 0){
       struct node  one ;
       struct node  second ;    

    }

    return 0;
}











/* SIMPLE:
int main()
{
    struct node  one ;
    struct node  second ;
    one.data = 123;
    one.next = &second;
    printf("\ndata => %d  ",one.data);
    printf("\nnext ptr  => %p  ",*(one.next));
    return 0;
}

output :
data => 123
next ptr  => 00401970
*/