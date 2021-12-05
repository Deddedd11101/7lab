// 2part1num.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdio.h>
void print_arr(int*, const std::size_t, const int);
int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8,9,10 };
    const std::size_t len = sizeof(arr) / sizeof(*arr);
    const int COLUMNS = 3;
    print_arr(arr, len, COLUMNS);
    return 0;
}
void print_arr(int* arr, const std::size_t len, const int col)
{
    for (int i = 0; i < len; i++)
    {
        if (i % col == 0) std::cout << std::endl;
        std::cout << arr[i] << " ";
    }
}

