#include<stdio.h>
void main()
{
	int num = 0;
	printf("Enter the number to find the prime factorization : ");
	scanf("%d",&num);
	printf("\n The number entered is : %d ", num);
	printf(" Prime Factors : ");
	while (num >= 2)
	{
		for (int i = 2; i <= num; i++)
		{
			if (num % i == 0)
			{
				printf("%d ", i);
				num = num / i;
			}
		}

	}
	printf("\n");
}