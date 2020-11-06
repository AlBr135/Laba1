#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//¬вести действительное число x, вычислить и вывести.
//y = 11 * x^10 + 10 * x^9 + 9 * x^8 + ... + 2 * x + 1.
int

main()

{
	float x, y, k, a;
	printf("Input x:");	
	if (scanf("%f", &x) != 1) {
		printf("Input Error");
	}
	else
	{
		k = 1;
		y = 1;
		a = 1;
		for (int n = 1; n <= 10; n++)

		{
			k = k + 1;
			a = a * x;
			y = y + k * a;

		}

		printf("y = % f\n", y);

	}
}