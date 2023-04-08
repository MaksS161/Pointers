#include"Print.h"

template <typename T> void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		// Обращение к элеентам массива через Арифметику указателей и оператор разыменования
		cout << *(arr + i) << "\t";
	}
	cout << endl;
}
