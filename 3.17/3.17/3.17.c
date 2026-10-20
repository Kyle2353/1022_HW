#include <stdio.h>
#include <stdlib.h>

int main()
{	
	while (1)
	{
		int account = 0;
		float balance = 0.0;
		float charges = 0.0;
		float credits = 0.0;
		float balance_new = 0.0;
		float credits_limit = 0.0;
		printf("Enter account number(-1 to end): ");
		scanf_s("%d", &account);
		if (account == -1)
		{
			break;
		}
		printf("Enter beginning balance: ");
		scanf_s("%f", &balance);
		printf("Enter total charges: ");
		scanf_s("%f", &charges);
		printf("Enter total credit: ");
		scanf_s("%f", &credits);
		printf("Enter credit limit: ");
		scanf_s("%f", &credits_limit);
		balance_new = balance + charges - credits;
		if (balance_new > credits_limit)
		{
			printf("Account: %d\n", account);
			printf("Credit Limit: %.2f\n", credits_limit);
			printf("Balance: %.2f\n", balance_new);
			printf("Credit Limit Exceeded.\n");
		}
		printf("\n");
	}
}



