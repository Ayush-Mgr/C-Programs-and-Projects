#include<stdio.h>
void main()
{
	int a=0,b=1,n,c;
	printf("Enter the number of terms");
	scanf("%d", &n);
	
	printf("%d , %d", a, b);
	
	c=a+b;
	
	for(int x=3;x<=n;x++){
		
		printf(", %d", c);
		a=b;
		b=c;
		c=a+b;
	}
}
	
