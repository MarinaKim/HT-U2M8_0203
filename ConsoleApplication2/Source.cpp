#include<stdio.h>
#include <locale.h>
#include<iostream>
#include <math.h>
#include <time.h>
#include <stdint.h>
#include <string.h>
#include "Header.h"

using namespace std;

#define size 20
int main()
{
	setlocale(LC_ALL, "Russian");
	int n;

	do
	{
		printf("Введите номер пункта: ");
		scanf("%d", &n);
		cin.get();
		switch (n) {
			//1.	В заданной строке заменить каждый символ строки следующим по коду символом. Букву «я» заменить пробелом.
		case 1: {
			char str[10];
			printf("Введите строку: \n");
			fgets(str, 10, stdin);
			int k = strlen(str);

			changeSymbol(str, k);
			printf("%s\n", str);

		} break;

			//2.	В заданной строке посчитать количество разных символов, входящих в эту строку
		case 2: {
			char str[10];
			printf("Введите строку: \n");
			fgets(str, 10, stdin);
			int k = strlen(str);
			int l=QuantityOfDifferentSymbols(str, k);
			printf("%d\n", l);

		} break;

			//3.	В заданной строке расположить в обратном порядке все слова. Разделителями слов считаются пробелы
		case 3: {
			char str[10];
			printf("Введите строку: \n");
			fgets(str, 10, stdin);
			int k = strlen(str);

		} break;

			//4.	В заданной строке посчитать количество слов, содержащих только строчные русские буквы. Разделителями слов считаются пробелы.
		case 4: {
			char str[50];
			printf("Введите строку: \n");
			fgets(str, 50, stdin);
			int k = strlen(str);
			int l=WordWithRusLetter(str, k);
			printf("%d\n", l);
		} break;

//5.	По заданной строке получить массив слов, входящих в эту строку. Разделителями слов считаются пробелы.
		case 5: {
			int k;
			char str[50];
			printf("Введите строку: \n");
			fgets(str, 50, stdin);
			k = strlen(str);

		} break;

			//6.	Дан массив символов. Подсчитать, сколько различных символов встречается в нем. Вывести их на экран
		case 6: {
			char str[10];
			printf("Введите строку: \n");
			fgets(str, 10, stdin);
			int k = strlen(str);
			QuantityOfDifferentSymbols_print(str, k);
			
		} break;

//7.	Дан массив символов. Подсчитать самую длинную последовательность подряд идущих букв а.
		case 7: {
			char str[50];
			printf("Введите строку: \n");
			fgets(str, 50, stdin);
			int k = strlen(str);

		} break;

			//8.	Дан массив символов, среди которых есть открывающиеся и закрывающиеся скобки. Вывести на экран массивы символов, расположенные внутри этих скобок.
		case 8: {
			char str[50];
			printf("Введите строку: \n");
			fgets(str, 50, stdin);
			int k = strlen(str);
			skobki(str, k);


		} break;

//9.	Дан массив символов, содержащий текст. Определить процентное отношение строчных и прописных букв к общему числу символов в нем.
		case 9: {
			char str[50];
			printf("Введите строку: \n");
			fgets(str, 50, stdin);
			int k = strlen(str);
			lowerCapital(str, k);
		} break;

//10.	Дан массив символов, среди которых есть одна открывающаяся и одна закрывающаяся скобка. Вывести на экран все символы, расположенные внутри этих скобок
		case 10: {

			// такое же как задание 8
		} break;
		}
	} while (n > 0);
}