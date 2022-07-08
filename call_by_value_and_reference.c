#include<stdio.h>
int swap(int a,int b)
{
	int t;
	t=a;
	a=b;
	b=t;
	printf("\nAfter Swapping - Inside Function A=%d and B=%d",a,b);
}
int swap1(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
	printf("\nAfter Swapping - Inside Function A=%d and B=%d",*a,*b);
}
int main()
{
	int x,y;
	printf("Enter two values:\n");
	scanf("%d %d",&x,&y);
	
	printf("Call By Value\n====================");
	printf("\nBefore Swapping - Main Function A=%d and B=%d",x,y);
	swap(x,y);
	printf("\nAfter Swapping - Main Function A=%d and B=%d",x,y);
	
	printf("\nCall By Reference\n====================");
	printf("\nBefore Swapping - Main Function A=%d and B=%d",x,y);
	swap1(&x,&y);
	printf("\nAfter Swapping - Main Function A=%d and B=%d",x,y);
	
	return 0;
}













