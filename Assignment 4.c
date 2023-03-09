/*
DESCRIPTION: Programming Excerise Four
CLASS: COSC 1420.SO1
AUTHOR: TYLER ECHOLS
DATE: Feb 2019
*/


#pragma warning (disable:4996)

#include <stdio.h>


void main()

{
	char X; 
	int i = 0;
	int j = 0;



	const int MinVal = 100000000;

	float sum1;
	sum1 = 0;

	float sum2;
	sum2 = 0;

	double sum3;
	sum3 = 0;

	double sum4;
	sum4 = 0;

	for (int i = MinVal, j = 1; i > 0, j <= MinVal; i--, j++)
	{
		sum1 += (1.0 / i);
		sum3 += (1.0 / i);



		sum2 += (1.0 / j);
		sum4 += (1.0 / j);
	}

	printf ("%f\n", sum1);
	printf("%f\n", sum2);
	printf("%f\n", sum3);
	printf("%f\n", sum4);

	scanf("%c", &X);

	printf("Press enter to continue");
	scanf("%c", &X);

	/* the diffrences between my summations is that the ones that use floats can only hold 32 bits,
	while a double can hold 64 bits.
	Meaning the decimal will be smaller for the summations of all the floats.  */


}