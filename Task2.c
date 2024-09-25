#include <stdio.h>
#include <locale.h>

void main()

{
	setlocale(LC_CTYPE, "RUS");
	
	int a = 11, b = 3, x;
	float y;
	double z;
	
	x = (int)a / (int)b;
	y = (float)a / (float)b;
	z = (double)a / (double)b;

	printf("x = %i, y = %g, z = %le", x, y, z);
}

void main2()

{
	setlocale(LC_CTYPE, "RUS");

	int a = 11, b = 3, x;

	printf("x = %i, y = %g, z = %le", (int)a / b, (float)a / b, (double)a / b);
}