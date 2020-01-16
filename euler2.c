#include <stdio.h>

double calc(double epsilon)
{
	long long n = 1;
	double e, factorial;
	e = 1.0;
	factorial = 1.0;
	while (1.0/(factorial*n) >= epsilon)

	{
		factorial *= n;
		e += 1.0/factorial;
		n++;
	}

	return e;
}	

int main()
{
	double epsilon ;
	double e;
	printf("enter a small number:");
	scanf(" %lf", &epsilon);
	e = calc(epsilon);
	printf(" the value is %0.12f \n ", e);
}

