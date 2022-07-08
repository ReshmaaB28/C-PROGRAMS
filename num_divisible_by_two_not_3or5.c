#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter the value of n:\n");
	scanf("%d",&n);
	printf("The numbers divisible by 2 but not by 3 and 5 till %d...\n",n);
	for(i=1;i<=n;i++)
	{
		if((i%2==0)&&(i%3!=0)&&(i%5!=0))
		{
			printf(" %d",i);
		}
	}
	return 0;
}
