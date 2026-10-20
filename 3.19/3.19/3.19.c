#include <stdio.h>
#include <stdlib.h>

int main()
{	
	while (1)
	{
		float principal = 0.0;
		float interest_rate = 0.0;
		float term = 0.0;
		float interest_charge = 0.0;
		printf("Enter loan principal(-1 to end): ");
		scanf_s("%f", &principal);
		if (principal == -1)
		{
			exit(0);
		}
		printf("Enter interest rate: ");
		scanf_s("%f", &interest_rate);
		printf("Enter term of the loan in days: ");
		scanf_s("%f", &term);
		interest_charge = principal * interest_rate * term / 365;
		printf("The interest charge is $%.2f\n\n", interest_charge);
	}
}










