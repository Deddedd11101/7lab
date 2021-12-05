// 3zad.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdio.h>
#include <typeinfo>
using namespace std;

int main()
{
	char c;

	int i;

	double d;

	printf("tip peremennoi \t adres perem\t adres+2 \t adres-1\n");

	printf("char \t\t %p \t\t %p \t\t %p\n", &c, &c + 2, &c - 1);



	printf("int \t\t %p \t\t %p \t\t %p\n", &i, &i + 2, &i - 1);



	printf("double \t\t %p \t\t %p \t\t %p\n", &d, &d + 2, &d - 1);
	return 0;
}

