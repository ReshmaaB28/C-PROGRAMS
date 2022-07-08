#include<stdio.h>
struct student
{
	int rollno,s1,s2,tot;
	char name[10];
	float avg;
}s[10];
int main()
{
	int i,n;
	printf("Enter number of students:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter Name:\n");
		scanf("%s",&s[i].name);
		printf("\nEnter Roll no. :\n");
		scanf("%d",&s[i].rollno);
		printf("\nEnter two subjects mark:\n");
		scanf("%d %d",&s[i].s1,&s[i].s2);
		s[i].tot=s[i].s1+s[i].s2;
		s[i].avg=s[i].tot/2;
	}
	printf("\nRoll no.\tName\t\tSub1\t\tSub2\t\tTotal\t\tAverage\n");
	for(i=0;i<n;i++)
	printf("\n%d\t\t%s\t\t%d\t\t%d\t\t%d\t\t%.2f\n",s[i].rollno,s[i].name,s[i].s1,s[i].s2,s[i].tot,s[i].avg);
	return 0;
}
