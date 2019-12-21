#include <stdio.h>
void triangle();
void ID();
void carpets() {};
void equation() {};

int main()

{
	int num1=0;

	// אתחיל בלבנות את המערכת החיצונית, ןלאט לאט אבנה את התוכנית בכל אופציה
	while (num1!=-1)
	{
		printf("Choose 1 for triangle, 2 for ID, 3 for carpets, 4 for equation, -1 for exit\n");
		scanf_s("%d", &num1);
		switch (num1)
		{
		
		case 1:
			triangle();
			break;
		case 2:
			ID();
			break;
		case 3:
			carpets();
			break;
		case 4:
			equation();
			break;
			//exit
		default:
			break;
		}
	}
}
void triangle()
{
	int left, right, i, n, found;
	printf("Enter 2 numbers\n");
	scanf_s("%d %d", &left, &right);
	found = 0;
	if (right > left)
	{

		for (i = left; i <= right; i++)
		{

			for (n = 1; n <= i; n++)
			{
				if ((n*(n + 1) / 2) == i)
				{
					printf("%d\n", i);
					found = 1;
				}

			}
		}
	}
	else
	{
		printf("Error input!");
	}
	if (found == 0)
		printf("none\n");
}
	
void ID()
	{
		long ID,num1;
		int count, i, temp, sum;
		scanf_s("%d", &ID);
		//אני רוצה לבדוק כמה ספרות יש למספר
		num1 = ID;
		count = 0;
		sum = 0;
		while (num1>0)
		{
			num1 = num1 / 10;
			count++;
		}
		num1 = ID;
		for (i = 1; i <= count; i++)
		{
			if (i % 2 == 0)
			{
				temp = num1 % 10 * 2;
				if (temp > 9)
					temp = temp / 10 + temp % 10;
			}
			else temp = num1 % 10;
			sum += temp;
				num1 = num1 / 10;

		}
		if (sum % 10 == 0)
			printf("Valid ID number\n");
		else printf("Invalid ID number\n");
	}
