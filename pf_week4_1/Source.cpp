//64010846 Siriphicha Munsamer
#include <stdio.h>
int main()
{
	int a;
	scanf_s("%d", &a);
	int half = (a - 1);

	for (int i = 0; i <= (half * 2); i++)
	{
		//printf("%d ", i);
		if (i == 0 || i == (half * 2))
		{
			for (int n = 0; n <= (half * 2); n++)
				printf("*");
		}
		else
		{
			//TOP
			if (i < half)
			{
				//space 1
				for (int n = 0; n < i; n++)
					printf(" ");
				printf("*");

				//space 2
				for (int n = 0; n <= (half * 2) - ((i + 1) * 2); n++)
					printf(" ");
				printf("*");
			}
			//BOTTOM
			else if (i > half)
			{
				//space 1
				for (int n = 0; n < (2 * half) - i; n++)
					printf(" ");
				printf("*");

				//space 2
				for (int n = 0; n < ((i - half) * 2) - 1; n++)
					printf(" ");
				printf("*");
			}
			else
				// MIDDLE
			{
				for (int n = 0; n < i; n++)
					printf(" ");
				printf("*");
			}

		}
		printf("\n");
	}

	return 0;
}