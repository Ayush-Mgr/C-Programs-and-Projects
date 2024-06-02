#include <stdio.h>
#include <stdlib.h>

int main()
{
  int center,left ,right ,result = 0, search =30,size = 5 , *data = (int *) malloc (size*sizeof(int)); 
    
    data[0] = 10;
    data[1] = 20;
    data[2] = 30;
    data[3] = 40;
    data[4] = 50;
    center = size/2;
    right = size;
    left = data[0];

    for (size_t i = 0; i < size; i++)
    { 
      if (data[center] > search){

        right =  center;
        center = right + left ;
        
      } 
      else if (data[right] < search)
      {
       left =  center;
       center = right + left ;
      }
      else if (data[center] == search)
      {
       printf("the no. is at index: %d ",center);
      }
      

      return 0;
    }
    
    
    
    
  



    return 0;
}

// output:
// the no. is at index: 2 