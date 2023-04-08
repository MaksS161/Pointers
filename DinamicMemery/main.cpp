#include"stdafx.h"
#include"Print.h"
#include"Print.cpp"
#include"Action.h"
#include"Action.cpp"

void FillRand(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите размер массива :"; cin >> n;

	int* arr = new int[n];
	FillRand(arr, n);
	Print(arr, n);

	int value;
	cout << "Введите добавляеемые значения: "; cin >> value;
	
	arr= push_back(arr, n, value);
	Print(arr, n);
	arr= push_front(arr, n, value);
	Print(arr, n);

	arr = pop_back(arr, n);
	Print(arr, n);
	arr = pop_front(arr, n);
	Print(arr, n);
	
	int index_ins;//переменная для добавления элимента
	cout << "Введите индекс добавляемого элимента:"; cin >> index_ins;
	arr= insert (arr, n, value, index_ins);
	Print(arr, n);
	
	int index_er;//переменная для удаления элимента
	cout << "Введите индекса удалаяемого элимента:"; cin >> index_er;
	arr= erase(arr, n, index_er);
	Print(arr, n);

	delete[] arr;
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		// Обращение к элеентам массива через оператор индексирования []
		arr[i] = rand() % 100;
	}
}
