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
		printf("������� ����� ������: ");
		scanf("%d", &n);
		cin.get();
		switch (n) {
			//1.	� �������� ������ �������� ������ ������ ������ ��������� �� ���� ��������. ����� ��� �������� ��������.
		case 1: {
			char str[10];
			printf("������� ������: \n");
			fgets(str, 10, stdin);
			int k = strlen(str);

			changeSymbol(str, k);
			printf("%s\n", str);

		} break;

			//2.	� �������� ������ ��������� ���������� ������ ��������, �������� � ��� ������
		case 2: {
			char str[10];
			printf("������� ������: \n");
			fgets(str, 10, stdin);
			int k = strlen(str);
			int l=QuantityOfDifferentSymbols(str, k);
			printf("%d\n", l);

		} break;

			//3.	� �������� ������ ����������� � �������� ������� ��� �����. ������������� ���� ��������� �������
		case 3: {
			char str[10];
			printf("������� ������: \n");
			fgets(str, 10, stdin);
			int k = strlen(str);

		} break;

			//4.	� �������� ������ ��������� ���������� ����, ���������� ������ �������� ������� �����. ������������� ���� ��������� �������.
		case 4: {
			char str[50];
			printf("������� ������: \n");
			fgets(str, 50, stdin);
			int k = strlen(str);
			int l=WordWithRusLetter(str, k);
			printf("%d\n", l);
		} break;

//5.	�� �������� ������ �������� ������ ����, �������� � ��� ������. ������������� ���� ��������� �������.
		case 5: {
			int k;
			char str[50];
			printf("������� ������: \n");
			fgets(str, 50, stdin);
			k = strlen(str);

		} break;

			//6.	��� ������ ��������. ����������, ������� ��������� �������� ����������� � ���. ������� �� �� �����
		case 6: {
			char str[10];
			printf("������� ������: \n");
			fgets(str, 10, stdin);
			int k = strlen(str);
			QuantityOfDifferentSymbols_print(str, k);
			
		} break;

//7.	��� ������ ��������. ���������� ����� ������� ������������������ ������ ������ ���� �.
		case 7: {
			char str[50];
			printf("������� ������: \n");
			fgets(str, 50, stdin);
			int k = strlen(str);

		} break;

			//8.	��� ������ ��������, ����� ������� ���� ������������� � ������������� ������. ������� �� ����� ������� ��������, ������������� ������ ���� ������.
		case 8: {
			char str[50];
			printf("������� ������: \n");
			fgets(str, 50, stdin);
			int k = strlen(str);
			skobki(str, k);


		} break;

//9.	��� ������ ��������, ���������� �����. ���������� ���������� ��������� �������� � ��������� ���� � ������ ����� �������� � ���.
		case 9: {
			char str[50];
			printf("������� ������: \n");
			fgets(str, 50, stdin);
			int k = strlen(str);
			lowerCapital(str, k);
		} break;

//10.	��� ������ ��������, ����� ������� ���� ���� ������������� � ���� ������������� ������. ������� �� ����� ��� �������, ������������� ������ ���� ������
		case 10: {

			// ����� �� ��� ������� 8
		} break;
		}
	} while (n > 0);
}