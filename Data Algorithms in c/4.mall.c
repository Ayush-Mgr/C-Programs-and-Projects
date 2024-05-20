#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr , size = 4 ;
    int *ptr = ( int *)malloc(size*sizeof(int));

    for (int i = 0; i < size ; i++)
    {
        printf("\ninput %d no: ",i+1);
        scanf("%d",ptr+i); //no need for '&'cause ptr already stores the address 

    
    }
     
    for (int i = 0; i < size ; i++)
    {
        printf("\nthe given no are: %d ",*(ptr+i));
    
    }


return 0;

}
/*
output:

input 1 no: 22

input 2 no: 11

input 3 no: 44

input 4 no: 55

the given no are: 22
the given no are: 11
the given no are: 44
the given no are: 55


*/
