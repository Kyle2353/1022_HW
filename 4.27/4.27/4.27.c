#include <stdio.h>	
#include <stdlib.h>
int main()
{
	int i2, j2, k2;
	for (int i = 1; i < 500; i++)
	{
		for (int j = 1; j < 500; j++)
		{
			for (int k = 1; k < 500; k++)
			{
				i2 = i * i;
				j2 = j * j;
				k2 = k * k;
				if (k2 == i2 + j2)
				{
					printf("side1:%d 	side2:%d 	hypotenuse:%d\n", i, j, k);
				}

			}
		}
	}


}








