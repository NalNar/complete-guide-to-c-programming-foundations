#include <stdio.h>
#include <stdlib.h>

int main()
{
	//declare constant ratio equal to 3/4
	const double ratio = 0.75;
	//declare char a
	char a;
	//declare integer b
	int b;
	//declare float c
	float c;

	//assign char
	a = 'A';
	//assign integer
	b = 90;
	//assign float
	c = 90.00;

	//output char value, e.g., "the value of variable a is '?'"
	printf("%c\n", a);
			// output integer value, e.g., "the value of variable b is ??"
			printf("%i\n", b);
			// output float value, e.g., "the value of variable c is ???.??"
			printf("%f\n", c);
			// output value of ratio, e.g., "the value of constant ratio is ???.??"
			printf("%f\n", ratio);
			return 0;
}
