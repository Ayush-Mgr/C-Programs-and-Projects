#include<stdio.h>

int main(){
	
	int arr[10];
	
	int max, min , b,s=10; 
	
	for (int i = 0 ; i < s ; i++ ){
	
	printf( "enter the %d elements of arrey : ",i );
	scanf("%d",&arr[i]);
	max = arr[i];
	min = arr[i];
	}
	
	for (int j = 0 ; j<s ; j++){
	if (max < arr[j]){
	 max = arr[j];
	} 
	if (min > arr[j]){
	 min = arr[j];
	} 
	 }
	printf("\n MAX : %d", max );
	printf("\n MIN : %d", min );
}
