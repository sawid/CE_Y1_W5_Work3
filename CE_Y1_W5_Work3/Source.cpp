#include <stdio.h>

int main() {
	int n;
	scanf_s("%d", &n);
	for (int i = 0; i < (n*2); i++)
	{
		for (int j = 0; j < n*2; j++)
		{
			
			if (j == i)
			{
				printf("*");
			}
			else if (j == ((n*2)-(i+1)))
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
}