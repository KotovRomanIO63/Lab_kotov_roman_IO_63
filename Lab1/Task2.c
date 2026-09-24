#include <stdio.h>

int main()
{
	float y = 0;
	float x = 0;

	scanf("%f", &x);

	if (x >= -49 && x < -10)
	{
		y = 10 * x * x * x + (7 * x) / 5 + 2;
		printf("%f\n", y);
	}
	else if (x > 0 && x <= 10)
	{
		y = 10 * x * x * x + (7 * x) / 5 + 2;
		printf("%f\n", y);
	}
	else if (x > 20)
	{
		y = -x + 9;
		printf("%f", -x + 9);
	}
	else
	{
		printf("The function f2 is undefined for x\n");
	}
	return 0;
}