#include<stdio.h>
#include <stdlib.h>
#define SIZE 100
void reverseFunc(int numR, int realSize);

int main()
{
	int *arrayR, realSize = 0, i;
	int numR[SIZE];
	arrayR = (int*)malloc(1);
	printf("Enter The Size");
	scanf("%d", &realSize);

	arrayR = (int *)realloc(arrayR, realSize);
	printf("Enter The Value:\n");
	for (i = 0; i < realSize; i++)
	{
		scanf("%d", numR[i]);
	}
	reverseFunc(numR,realSize);

}

void reverseFunc(int numR, int realSize)
{
	int j = 0;
	for (j = 0; j < realSize; j++)
	{
		printf("%d", numR[j]);
	}
		
}