
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int length = 0;
    int width = 0;
    int length_max = 0;
    int width_max = 0;

    printf("Enter length: ");
    scanf_s("%d", &length);
    length_max = length;

    printf("Enter width: ");
    scanf_s("%d", &width);
    width_max = width;

    for (length; length > 0; length--)
    {
        width = width_max;

        if ((length == length_max) || (length == 1))
        {
            for (width; width > 0; width--)
            {
                printf("*");
            }
            printf("\n");
            continue;
        }

        for (width; width > 0; width--)
        {
            if ((width == width_max) || (width == 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
