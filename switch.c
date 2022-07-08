#include<stdio.h>
#include<conio.h>
int main()
{
	int ch;
	printf("Enter a number (Eg:Sunday=0) :\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 0:
			printf("Sunday");
			break;
		case 1:
			printf("Monday");
			break;
		case 2:
			printf("Tuesday");
			break;
		case 3:
			printf("Wednesday");
			break;
		case 4:
			printf("Thursday");
			break;
		case 5:
			printf("Friday");
			break;
		case 6:
			printf("Saturday");
			break;
		default:
			printf("INVALID NUMBER");
    }
    getch();
    return 0;
}
