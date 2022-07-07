#include<stdio.h>
int main()
{
	int i,n,a[10],search,start,end,mid,flag=0;
	printf("Enter array size :\n");
	scanf("%d",&n);
	printf("Enter values in ascending order :\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
    }
	printf("Enter search element :");
	scanf("%d",&search);
	start=0;
	end=n-1;
	while(start<=end)
	{
		mid=(start+end)/2;
		if(search==a[mid])
		{
			flag=1;
			break;
		}
		else if(search<a[mid])
		end=mid-1;
		else
		start=mid+1;
	}
	if(flag==1)
	printf("%d is found at location %d",search,mid+1);
	else
	printf("Element is not found");
	return 0;
}
