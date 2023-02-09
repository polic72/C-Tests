#include <stdio.h>

#define PI 3.14159265


struct test{
	int a;
	int b;
	int c;
} oh;

int main()
{
	double pi = 3.14;


	printf("pi: %f, sizeof(pi): %d\n", pi, sizeof(pi));
	
	printf("PI: %f, sizeof(PI): %d\n", PI, sizeof(PI));


	struct test* p_oh = &oh;

	//*p_oh.b = 5;
	(*p_oh).b = 5;

	printf("oh.a: %d, oh.b: %d, sizeof(oh): %d\n", oh.a, p_oh->b, sizeof(oh));


	void* bro = &oh;

	printf("bro.a: %d, bro.b: %d, sizeof(bro): %d\n", ((struct test*)bro)->a, ((struct test*)bro)->b, sizeof(bro));


	return 0;
}
