#include <stdio.h>


int add(int n, int m)
{
	return n + m;
}


int main()
{
	printf("add(1, 2): %d\n", add(1, 2));


	int (*adder)(int, int) = &add;

	printf("(*adder)(2, 3): %d\n", (*adder)(2, 3));


	int (*adder2)(int, int) = add;

	printf("adder2(2, 3): %d\n", adder2(2, 3));


	return 0;
}
