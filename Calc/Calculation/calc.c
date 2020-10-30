#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 30

int main()
{
	int a, b, result=0;
	double resultD = 0;
	char operC;
	for (int i = 0; i < MAX; i++)
	{
		printf("Input number: ");
		scanf("%d%*c", &a);
		printf("Input operation: ");
		scanf("%c%*c", &operC);

		while (!(operC == '+' || operC == '-' || operC == '*' || operC == '/' || operC == '%'))
		{
			printf("Please input correct operator: ");
			scanf("%c%*c", &operC);
		}

		printf("Input number: ");
		scanf("%d%*c", &b);

		switch (operC)
		{
		case '+':
			result = a + b;
			break;
		case '-':
			result = a - b;
			break;
		case '*':
			result = a * b;
			break;
		case '/':
			resultD = (double)a / b;
			break;
		case '%':
			result = a % b;
			break;
		default:
			printf("operation is not correct!\n");
		}
		
		if (operC == '/'){
			printf("The result is %.2lf\n", resultD);
		}
		else
		{
			printf("The result is %d\n", result);
		}

	}
	return 0;
}