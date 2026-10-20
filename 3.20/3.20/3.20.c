#include <stdio.h>
#include <stdlib.h>

int main()
{
	while (1)
	{
		int hours = 0;
		float rate = 0.0;
		float slalary = 0.0;
		printf("Enter # of hours worked (-1 to end):");
		scanf_s("%d", &hours);
		if (hours == -1)
			return 0;
		printf("Enter hourly rate of the worker (500.00):");
		scanf_s("%f", &rate);
		slalary = (hours > 40) ? (hours - 40) * rate * 1.5f + 40 * rate : hours * rate;
		printf("Salary: $%.2f\n\n", slalary);
	}
}





