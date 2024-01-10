//WAP to check Armstorng without using math.h
#include<stdio.h>
void main()
{
	int a,d,s=0,k=1,r,x,y;
	printf("Enter the number you want to check  ");
	scanf("%d", &a);
	
	int temp=a;
	int flag=a;
	
	int c=0;
	while(a!=0)
	{
		d=a%10;
		c+=1;
		a=a/10;
	}
	for(y=1;1<=c;y++)
	{
	r=temp%10;
	for(x=1;x<=x;x++)
	{
		
		k*=r;
	}
	s=s+k;
	temp=temp/10;
	}
	if(s==flag)
	{
		printf("The number is armstrong");
	}
	else
	{
		printf("Thee number is not Armstrong");
	}
}
