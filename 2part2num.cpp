// 2part2num.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include < stdio.h>
#include <Windows.h>
using namespace std;
void get_arr(int*, const std::size_t);
void print_arr(int*, const std::size_t, const int);
constexpr auto ARRAY_LENGTH = 7;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int arr[ARRAY_LENGTH];
	const std::size_t len = sizeof(arr) / sizeof(*arr);
	const int COLUMNS = 3;
	get_arr(arr, len);
	
	cout << "Элементы массива получили следующие значения :";
	print_arr(arr, len, COLUMNS);
return 0;

}
void get_arr(int* arr, const std::size_t len)
{
	cout << "Введите значения элементов массива ";
	for (int i = 0; i < len; i++)
	{
		cout << "\narr[" << i << "] = ";
		cin >> arr[i];
	}
}
void print_arr(int* arr, const std::size_t len, const int col)
{
	for (int i = 0; i < len; i++)
	{
		if (i % col == 0) std::cout << std::endl;
		std::cout << arr[i] << " ";
	}
}
