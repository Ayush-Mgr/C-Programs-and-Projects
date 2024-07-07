#include <stdio.h>

int main() {
  int arr[] = {8,3,2,4,5,1}; 
  int size = sizeof(arr)/sizeof(arr[0]);
  printf("size = %d,\n ",size);
  
  
  
  for(int i = 0 ; i < size -1  ; i++){
     
      int min = i;
     
      for (int j = 0 ; j < size - 1 ;j++ ){
        
          
          
          if (arr[min] > arr[j]){
              min =  j;
          }
          
          
          
         
          if (min != i ){
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
              
          }
           
      }
      
  }
    printf("The shorted arreys are : ");
    for(int i = size - 1; i >= 0 ; i--) {
        printf("%d ",arr[i]);
    }

    return 0;
}


/*
output:
size = 6,
shorted arrey are : 1 2 3 4 5 8 
*/