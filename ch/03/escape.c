#include <stdio.h>
int main(void)
{
	
	float salary;
	printf("\aEnter your desired monthly salary: ");
	
	printf("$_____\b\b\b\b\b");
	scanf("%f", &salary);
	getchar();
	printf("\n\t$%.2f a month is %.2f a year", salary, salary*12);
	printf("\rGee!\n");
	return 0;
}
