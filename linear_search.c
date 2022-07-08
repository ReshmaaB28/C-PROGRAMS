#include<stdio.h>
int main()
{
	int i,n,a[10],search;
	printf("Enter array size :\n");
	scanf("%d",&n);
	printf("Enter values:\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter search element :");
	scanf("%d",&search);
	for(i=0;i<n;i++)
	{
		if(search==a[i])
		{
			printf("%d is found at location %d",search,i+1);
			break;
		}
	}
	if(i==n)
	printf("Element not found");
	return 0;
}
