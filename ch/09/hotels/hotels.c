#include <stdio.h>
#include "hotels.h"
int menu(void)
{
    int code, status;
    
    printf("\n%s%s\n", STARS, STARS);
    
    printf("Enter the number of the desired hotel:\n");
    printf("1) Fairfield Arms		2) Hotel Olympic\n");
    printf("3) Chertworthy Plaza		4) The Stockton\n");
    printf("5) Quit\n");
    
    printf("%s%s\n", STARS, STARS);
    
    while ((status = scanf("%d" ,&code)) != 1 
	|| (code < 1 || code > 5))
    {
	if (status != 1)
	    scanf("%*s");
	printf("Enter integer value from 1 to 5, please.\n");
    }
    
    return code;
}

int getnights(void)
{
    int nights;
    printf("How many nights are needed?\n");
    
    while ((scanf("%d", &nights)) != 1)
    {
	scanf("%*s");
	printf("Enter integer value, please.\n");
    }
    
    return nights;
}

void showprice(double rate, int nights)
{
    int n;
    double total = 0.0;
    double factor = 1.0;
    
    for (n = 1; n<= nights; n++, factor *= DISCOUNT)
	total += rate * factor;
    printf("The total cost will be $%0.2f.\n", total);
}
