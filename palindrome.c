#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char str1[20],str2[20];
	printf("Enter a string:\n");
	scanf("%s",&str1);
	strcpy(str2,str1);
	strrev(str2);
	if(!strcmp(str1,str2))
	printf("\nIt is a palindrome!");
	else
	printf("\nIt is not a palindrome!");
	return 0;
}
