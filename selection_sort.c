#include<stdio.h>
int main()
{
	int i,j,n,a[50],temp,min;
	printf("Enter the value of n:\n");
	scanf("%d",&n);
	printf("Enter the values one by one...\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			min=j;
		}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
	printf("Sorted Array....\n");
	for(i=0;i<n;i++)
	printf(" %d",a[i]);
	return 0;
}
