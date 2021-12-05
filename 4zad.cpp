// 4zad.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <typeinfo>
using namespace std;
int main()
{
    /*int x = 8, y = 3;
    float z1, z2;
    z1 = x / y;
    z2 = (float)x / y;
    printf("x/y=%f\n", z1);
    printf("(float)x/y=%f\n", z2);*/


    unsigned long ul = 0x77BBCCDD, * pul = &ul;
    unsigned char* p = (unsigned char*)pul;
    int i, n = sizeof(*pul);
    printf("sizeof(*pul) = %d\n", n);
    for (i = 0; i < n; i++, p++)
        printf("%x\n", *p);
}
// тк в первом выражении переменной типа float присваевается операция с двумя переменными типа int  то результат обрезается до целого 
// во втором присутствует (float) что переводит результат между переменными типа int в float