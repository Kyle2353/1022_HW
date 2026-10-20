#include <stdio.h>
#include <stdlib.h>

int main()
{	
	int pay_code;
	int hoursales;
	int weekly_salary;
	double salary;
	printf("Enter pay code: ");
	scanf_s("%d", &pay_code);
	if (pay_code == 2 || pay_code == 3 || pay_code == 4)
	{
		printf("Enter work hours or total weekly sales or amount of items: ");
		scanf_s("%d", &hoursales);
	}
	printf("If you are manager enter weekly salary,If you are hourly worker enter work salary,If you are pieceworker enter salary for each of items: ");
	scanf_s("%d", &weekly_salary);
	switch (pay_code)
	{
		case 1:
			salary = weekly_salary;
			printf("Salary: %.2f\n", salary);
		break;
		
		case 2:
			salary = hoursales > 40 ? weekly_salary + (hoursales - 40) * (weekly_salary*1.5) : weekly_salary * hoursales;
			printf("Salary: %.2f\n", salary);
		break;
			
		case 3:
			salary = 250 + hoursales * 0.057;
			printf("Salary: %.2f\n", salary);
		break;

		case 4:
			salary = weekly_salary * hoursales;
			printf("Salary: %.2f\n", salary);
		break;

		default:
			printf("Invalid pay code.\n");
	}



}














