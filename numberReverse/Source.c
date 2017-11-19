#include<stdio.h>
#include <stdlib.h>

int numberIs(int num);
int digitIs(int numDigit, int num);
int changeNum(int changedNum, int numDigit, int num);

int main()
{
	int num = 0, numDigit = 0, changedNum = 0;

	num = numberIs(num);
	numDigit = digitIs(numDigit,num);
	changedNum = changeNum(changedNum,numDigit,num);


	system("PAUSE");
	return 0;
}

int numberIs(int num)
{
	printf("Enter your number:");
	scanf_s("%d", &num);
	
	return num;
}

int digitIs(int numDigit, int num)
{
	while (num > 0)
	{
		num /= 10;
		numDigit++;
	}
	return numDigit;
}

int changeNum(int changedNum, int numDigit, int num)
{
	int j = 0, digit, k;
	int changeArray[100] = { 0 };
	for (; numDigit < 0; numDigit--)
	{
		changeArray[j] = num % 10;
		num /= 10;
		j++;
	}
	for ( k = 0; k < numDigit; k++)
	{
		printf("%d", changeArray[k]);
	}
	//printf("")
}
