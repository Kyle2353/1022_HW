#include <stdio.h>
#include <stdlib.h>

int main()
{	

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j >= abs(i - 4) && j <= 8 - abs(i - 4))
				printf("*");
			else
				printf(" ");


		}
		printf("\n");
	}


}
///*/*/*/
/*
0123456
	*
   ***		0
  *****		1
 *******		2
*********		3
 *******		4
  *****		5
   ***		6
    *
*/









