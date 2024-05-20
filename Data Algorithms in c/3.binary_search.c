//binary search
#include <stdio.h>

int main(){

int search = 4;
int arr[10]= {1,2,6,4,9};
int size = sizeof(arr) / sizeof(arr[0]);
for(int i =0 ;i < size ; i++){

if (arr[i] == search )
{
    printf("\n the nmber is in %d th position",i);
    break;
}



}

return 0;



}