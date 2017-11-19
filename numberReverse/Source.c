#include<stdio.h>

int numberIs(int num);
int digitIs(int numDigit, int num);

int main()
{
	int num = 0, numDigit = 0;

	num = numberIs(num);
	numDigit = digitIs(numDigit,num);


	
	printf("num iste%d\n", num);
	printf("i iste%d\n", numDigit);

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