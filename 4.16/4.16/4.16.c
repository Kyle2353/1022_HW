#include <stdio.h>

int main()
{
    int i, j;
	printf("(A)          (B)          (C)          (D)\n");
    for (i = 1; i <= 10; i++)
    {
        // A：星號增加
        for (j = 1; j <= i; j++)
            printf("*");
        for (j = 1; j <= 10 - i; j++)
            printf(" ");

        printf("   ");

        // B：星號減少
        for (j = 1; j <= 11 - i; j++)
            printf("*");
        for (j = 1; j <= i - 1; j++)
            printf(" ");

        printf("   ");

        // C：靠右的倒三角形
        for (j = 1; j < i; j++)
            printf(" ");
        for (j = 1; j <= 11 - i; j++)
            printf("*");

        printf("   ");

        // D：靠右的正三角形
        for (j = 1; j <= 10 - i; j++)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}