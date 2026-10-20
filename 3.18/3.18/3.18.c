#include <stdio.h>
#include <stdlib.h>

int main()
{
	while (1)
	{
		double sales;
		printf("Enter sales in dollars (-1 to end): ");
		scanf_s("%lf", &sales);
		if (sales == -1)
			break;
		printf("Commission: $%.2f\n", 200 + sales * 0.09);
	}
	return 0;
}









