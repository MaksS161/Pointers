#include<iostream>
using namespace std;

void FillRand(int arr[], const int n);

template <typename T> void Print(T arr[], const int n);

template <typename T>  T* push_back(int arr[], T &n, T value);
template <typename T>  T* push_front(int arr[], T &n, T value);

template <typename T> T* pop_back(int arr[], T &n);
template <typename T> T* pop_front(int arr[], T &n);

template <typename T> T* insert(int arr[], T &n, T value, T index_ins);
template <typename T> T* erase(int arr[], T &n, T index_er);

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
	
	int index_er;
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
template <typename T> void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		// Обращение к элеентам массива через Арифметику указателей и оператор разыменования
		cout << *(arr + i) << "\t";
	}
	cout << endl;
}
template <typename T> T* push_back(int arr[],  T& n, T value)
{
	//1. Создаем буферный массив нужного размера 
	int* buffer = new int[n + 1];
	//2. Копируем все значения из исх в буферный 
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	//3 удаляем исх. массив
	delete[] arr;
	//4. Подменить адрес старого массива адр. нового 
	arr = buffer;
	//Только после этого в массив 'arr' можно добавить значение
	arr[n] = value;
	//5.Только после этого добавляем в массив 'arr' значение:
	n++;
	//6. Возвращаем новый массив
	return arr;
}
template <typename T> T* push_front(int arr[], T& n, T value)
{
	T* buffer = new int[n + 1];
	for (int i = 0; i < n; i++)
	{
		buffer[i+1] = arr[i];
	}
	delete[] arr;
	arr = buffer;
	arr[0] = value;
	n++;
	return arr;
}
template <typename T> T* pop_back(int arr[], T& n)
{
	T* buffer=new int [--n];
	for (int i = 0; i < n; i++) buffer[i] = arr[i];
	delete[]arr;
	return buffer;
}
template <typename T> T* pop_front(int arr[], T& n)
{
	T* buffer = new  int[--n];
	for (int i = 0; i < n; i++) buffer[i] = arr[i+1];
	delete[]arr;
	return buffer;
}
template <typename T> T* insert(int arr[], T& n, T value, T index_ins)
{
	T* buffer = new int[n +1];
	for (int i = 0; i < n; i++) 
	{
		if (i<index_ins)
		{
		buffer[i] = arr[i];
		}
		buffer[i+1] = arr[i];
	}
	delete[] arr;
	arr = buffer;
	buffer[index_ins-1] = value;
	n++;
	return arr;
}
template <typename T> T* erase(int arr[], T& n, T index_er)
{
	T* buffer = new int[n-1];
	for (int i = 0; i < n; i++) 
	{
		if (i < index_er)
		{
		buffer[i] = arr[i];
		}
		buffer[i+1] = arr[i+2];
	}
	delete[]arr;
	arr = buffer;
	n--;
	return arr;
}
