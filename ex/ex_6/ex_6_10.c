#include <stdio.h>
#define SIZE 8
int main(void)
{
    int by_two[SIZE];
    int index;
    
    for (index = 1; index <= SIZE; index++)
	by_two[index] = index * 2;
    for (index = 1; index <= SIZE; index++)
	printf("%d ", by_two[index]);
    printf("\n");
    return 0;
}