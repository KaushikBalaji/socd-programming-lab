#include "headers.h"

int main()
{

	int choice1, choice2, a, b;
	float result;
	while (1)
	{

		printf("Enter your choice\n1. Normal calculation\n2. Deep maths\n3. Exit\n");
		scanf("%d", &choice1);
		switch (choice1)
		{
		case 1:
			printf("Normal calculation\nEnter your choice\n1. Add\n2. Sub\n3. Mul\n4. Div\n5. Go back\n");
			scanf("%d", &choice2);
			if (choice2 < 5 && choice2 > 0)
			{
				printf("Enter 2 numbers (with space): ");
				scanf("%d %d", &a, &b);

				result = SimpleMath(a, b, choice2);
				if (result == -99)
					printf("Div by zero is invalid\n");
				printf("Result of calculation:  %f\n", result);
				break;
			}
			else if (choice2 == 5)
			{
				break;
			}
			else
			{
				printf("Invalid choice\n");
				break;
			}

		case 2:
			printf("Deep mathematics\nEnter your choice\n1. Power\n2. Root\n3. Logarithm\n4. Go back\n");
			scanf("%d", &choice2);
			if (choice2 < 4 && choice2 > 0)
			{
				printf("Enter 2 numbers (with space): ");
				scanf("%d %d", &a, &b);

				result = DeepMaths(a, b, choice2);
				if (result == -99)
					printf("Log 0 / Negative root is undefined\n");
				printf("Result of calculation:  %f\n", result);
				break;
			}
			else if (choice2 == 4)
			{
				break;
			}
			else
			{
				printf("Invalid choice\n");
				break;
			}
		case 3:
			printf("Exiting...\n");
			return 0;

		default:
			printf("Invalid choice\n");
			return 0;
		}
	}
}
