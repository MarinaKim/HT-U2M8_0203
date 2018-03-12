#include <math.h>
#include <time.h>
#include <stdint.h>
#include <string.h>
#include <iostream>

using namespace std;

void changeSymbol(char *a, int length)
{
	for (int i = 0; i < length; i++)
	{
		int code = (int)a[i];
		a[i] = (char)(code + 1);
	}
}

int QuantityOfDifferentSymbols(char*a, int length)
{
	int count = 0, count1 = 0;

	for (int i = 0; i < length - 1; i++)
	{
		count = 0;
		for (int j = i + 1;j < length;j++)
		{
			if (a[i] == a[j])
				count++;
		}
		if (count == 0)
			count1++;
	}
	return count1;
}

void QuantityOfDifferentSymbols_print(char*a, int length)
{
	int count = 0, count1 = 0;
	char b[10];
	for (int i = 0; i < length - 1; i++)
	{
		count = 0;
		for (int j = i + 1;j < length;j++)
		{
			if (a[i] == a[j])
				count++;
		}
		if (count == 0)
		{
			count1++;
			b[i] = a[i];
		}
	}
	printf("кол-во различных символов: %d\n", count1);
	printf("%s\n", b);
}
//void InversString(char *a)
//{
//	int k = 0;
//	while (*a != '\0')
//	{
//		if (*a == ' ')
//			k++; //кол=-во пробелов
//	}
//	printf("Кол-во слов в предложении: %d\n", k + 1);
//
//}

int WordWithRusLetter(char*a, int length)
{
	int count = 0;
	for (int i = 0; i < length; i++)
	{
		if (i == 0)
		{
			int code = (int)a[i];
			if (code >= -32 && code <= -1)
			{
				count++;

			}
		}
		if (a[i] == ' ')
		{
			int code = (int)a[i + 1];
			if (code >= -32 && code <= -1)
			{
				count++;

			}
		}
	}
	return count;
}


void skobki(char *a, int length)
{
	int start, end;
	for (int i = 0; i < length; i++)
	{
		if (a[i] == '(')
			start = i;
		if (a[i] == ')')
			end = i;
	}
	for (int i = start + 1;i < end;i++)
	{
		printf("%c", a[i]);
	}
	printf("\n");
}

void lowerCapital(char *a, int length)
{
	int count = 0;
	for (int i = 0; i < length; i++)
	{
		int code = (int)a[i + 1];
		if (code >= 65 && code <= 90)
			count++;
	}
	int procentCapital = count * 100 / length;
	int procentLower = 100 - procentCapital;
	printf("Процент строчных букв: %d\n", procentCapital);
	printf("Процент прописных букв: %d\n", procentLower);

}