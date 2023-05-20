#include <stdio.h>
#include <stdlib.h>

int ipow(int base, int exp);

int main(int argc, char ** argv)
{
	if (argc != 3)
	{
		printf("Please supply 2 arguments, a base and an exponent.\n");

		return 1;
	}

	int base = atoi(argv[1]);
	int exp = atoi(argv[2]);


	printf("ipow(%d, %d) = %d\n", base, exp, ipow(base, exp));

	return 0;
}


//From https://stackoverflow.com/questions/101439/the-most-efficient-way-to-implement-an-integer-based-power-function-powint-int
int ipow(int base, int exp)
{
	printf("base = %d\nexp = %d\n\n", base, exp);

    int result = 1;
    while (1)
    {
	printf("exp & 1: %d\n", exp & 1);

        if (exp & 1)
	{
		printf("result = %d, [result *= base], ", result);
		result *= base;
		printf("result = %d\n", result);
	}
        
        
	printf("exp = %d, [exp >>= 1], ", exp);
	exp >>= 1;
	printf("exp = %d\n", exp);


        if (!exp)
	{
		printf("!exp = %d\n", !exp);

		break;
	}


	printf("base = %d, [base *= base], ", base);
        base *= base;
	printf("base = %d\n", base);
    }

    return result;
}
