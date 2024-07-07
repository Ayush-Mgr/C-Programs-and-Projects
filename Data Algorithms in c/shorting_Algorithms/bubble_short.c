#include<stdio.h>
int main(){

    int data[5] ={3,2,7,1,6}, temp =0 ;
    
    int size = sizeof(data)/sizeof(data[0]); 
    
    for(int  i = 0; i<size;i++){
    
        for(int j = 0; j<size-1; j++){
    
             if (data[j] > data[j+1])
            {
                temp = data[j+1];
                data[j+1] = data[j];
                data[j] = temp;

            }
        }
    }
        printf("shorted array are :  ");
    for(int  i = 0; i<size;i++){
        printf("%d ",data[i]);
    }


return 0;
}


