#include <stdio.h>
#include <stdlib.h>


struct node
{
    int data;
    struct node* next;
};


int main()
{
    struct node  *one ;
    struct node  *second ;
    one = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    one->data = 123;
    one->next = second;
    second->data = 321;
    second->next = NULL;
    printf("\none data => %d  ",one->data);
    printf("\nnext ptr  => %p  ",(void*)one->next);
    printf("\nsecond data => %d  ",second->data);
    printf("\nnext ptr  => %p  ",(void*)second->next);
    free(one);
    free(second);
    return 0;
}


/*
output :
one data => 123
next ptr  => 00C72A10
second data => 321
next ptr  => 00000000
*/