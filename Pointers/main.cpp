#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"

int Sum(int n,...);

//#define POINTERS_BASICS
//#define ARRAY
#define HOME_WORK

void main()
{
	setlocale(LC_ALL, "");
#ifdef POINTERS_BASICS


	int a = 2;
	int* pa = &a;
	cout << a << endl;//выводим значение переменной 'а'
	cout << &a << endl;// взятие адреса переменной 'а' прямо при выводе переменной 
	cout << pa << endl;// вывод адреса переменной 'а' хранящегосся в указатееле 'ра'
	cout << *pa << endl;// разименование указателя 'ра'и получение значения 

#endif // POINTERS_BASICS
#ifdef ARRAY
	const int n = 5;
	int arr[n] = { 3,5,8,13,21 };
	cout << arr << endl;
	cout << *arr << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " = " << arr + i << tab;
	}
	cout << endl;
#endif // ARRAY
#ifdef HOME_WORK
	//1. Вычислить максимально возможный адресуемый объем памяти если разрядность адреса составляет 8 Байт;

	// а=2; n=8*8=64 
	//2 в 64ст = 2в60ст*2в4ст = 1 Экзабайт*16= 16 Экзабайт


	//2. Написать функцию int Sum(int n ...), которая принимает произвольное число параметров, и возвращает сумму всех принятых параметров;
	//Чтобы показать что функция примает произвольное чило аргументов, достаточно в конце списка принимаемых параметров поставить ...
	//	Например:
	//int Sum(int n ...);
	//ВАЖНО!!!
	//	Программу обязательно нужно скомпилировать в архитектуру x86(!!!НЕ x64!!!)

	t n = 6;
	cout << "Сумма принимаемых параметров =" << *p << endl;


#endif // HOME_WORK
}
int Sum(int n,...)
{
	int sum = 0;
	int* p = &n;
	for (int i = 0; i < n; i++)
	{
		sum +=* p;
	cout << *p << "\t";
	}
	return *p;
}