#include<stdio.h>
int main()
{
	float c,f;
	printf("Enter temperature in celsius :\n");
	scanf("%f",&c);
	f=(c*1.8)+32;
	printf("Temperature in fahrenheit = %f",f);
	
	printf("\nEnter temperature in fahrenheit :\n");
	scanf("%f",&f);
	c=(f-32)/1.8;
	printf("Temperature in celsius = %f",c);
	
	return 0;
}
