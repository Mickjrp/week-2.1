#include <stdio.h>

int a, x, y;

void func()
{

	x = 1;
	while (x <= a)
	{

		y = 1;
		while (y <= x)
		{
			printf("*");
			y = y + 1;
		}

		printf("\n");
		x = x + 1;

	}
}

int main()
{
	printf("Enter your number: ");
	scanf_s("%d", &a);

	func();



	return 0;
}