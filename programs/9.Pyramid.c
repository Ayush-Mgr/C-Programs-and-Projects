#include<stdio.h>
int main(){
	int ro ;
	
	printf("input the no of rows : ");
	scanf("%d",&ro);
	
	
	for(int i = 0 ; i<ro+1; i++)
	{
		
		for(int k = ro ; k != i; k--)
		{
		printf(" ");
		}
		
		for(int j = 0 ; j<(i*2)-1; j++)
		{
		printf("*");
		}
	printf("\n");
	}










}
