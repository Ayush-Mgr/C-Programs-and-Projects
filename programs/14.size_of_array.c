#include <stdio.h>

int main() { 
    
    int arr[] = {11,44,55,66,22};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("%d",size);
    
    return 0;
}

output :
5
