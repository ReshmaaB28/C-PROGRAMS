#include<stdio.h>
int main()
{
	int i,j,n,a[10],temp;
	printf("Enter array size :\n");
	scanf("%d",&n);
	printf("Enter values in ascending order :\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("Sorted Array...\n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	return 0;
}
	
    
