#include <stdio.h>
#include <stdlib.h>

int main()
{
  int center,left ,right ,result = 0, search =50,size = 5 , *data = (int *) malloc (size*sizeof(int)); 
    
    data[0] = 10;
    data[1] = 20;
    data[2] = 30;
    data[3] = 40;
    data[4] = 50;
    
    right = size - 1;
    left = 0;

    for (int i = 0; i < size; i++)
    { 
      center = (right + left)/2 ;
      if (data[center] > search){

        right =  center - 1;
        
        
      } 
      else if (data[center] < search)
      {
       left =  center + 1 ;
      
      }
      else if (data[center] == search)
      {
       printf("the no. is at index: %d ",center);
       return 0;
      }
    
      
    }
    
    
    
    
  


    printf("The number was not found.\n");  

    free(data); 

   return 0;
}

// output:
// the no. is at index: 4 