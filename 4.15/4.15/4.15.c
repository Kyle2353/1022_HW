#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	for(float i = 10.0; i <= 12.0 ; i+=0.5)
	{	
		float fv = 0.0;
		printf("rate: %.1f\n", i);
		fv = 5000.0 * (pow(1 + i/100.0, 15));
		printf("Future Value: %.2f\n", fv);

	}


}









