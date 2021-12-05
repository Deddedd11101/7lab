// 1zad.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
/*	float x = -8.92;
	int y = 5;
	printf("sizeof x=%u\n", sizeof x);
	printf("sizeof y=%u\n", sizeof y);
	printf("sizeof x+y=%u\n", sizeof x + y);
	printf("sizeof (x+y)=%u\n", sizeof(x + y));
	printf("sizeof x*2+1=%u\n", sizeof x * 2 + 1);
	printf("sizeof 2*y+1=%u\n", sizeof 2 * y + 1);
	printf("sizeof ++y*2=%u\n", sizeof ++y * 2);
	printf("sizeof y--*2=%u\n", sizeof y-- * 2);*/
    int ix;
    double dx, * pdx, ** ppdx;
    float fx, * pfx;
    char cx, * pcx, ** ppcx;
    long lx, * plx;
    long double ldx, * pldx;
    
    std::cout << "\nSize of int: " << sizeof(ix);
    std::cout << "\nSize of double: " << sizeof(dx);
    std::cout << "\nSize of float: " << sizeof(fx);
    std::cout << "\nSize of char: " << sizeof(cx);
    std::cout << "\nSize of long: " << sizeof(lx);
    std::cout << "\nSize of long double: " << sizeof(ldx);
    
    std::cout << "\nSize of *int: " << sizeof(&ix);
    std::cout << "\nSize of *double: " << sizeof(&dx);
    std::cout << "\nSize of *float: " << sizeof(&fx);
    std::cout << "\nSize of *char: " << sizeof(&cx);
    std::cout << "\nSize of *long: " << sizeof(&lx);
    std::cout << "\nSize of *long double: " << sizeof(&fx);
    std::cout << "\nSize of **char: " << sizeof(ppcx);
    std::cout << "\nSize of **double: " << sizeof(pldx);
    return 0;
}

