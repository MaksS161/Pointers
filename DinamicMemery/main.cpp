#include<iostream>
using namespace std;

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);

int* push_back(int arr[], int &n, int value);
int* push_front(int arr[], int &n, int value);

int* pop_back(int arr[], int &n);
int* pop_front(int arr[], int &n);

int* insert(int arr[], int &n, int value, int index);

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
	
	//arr= push_back(arr, n, value);
	//Print(arr, n);
	//arr= push_front(arr, n, value);
	//Print(arr, n);

	//arr = pop_back(arr, n);
	//Print(arr, n);
	//arr = pop_front(arr, n);
	//Print(arr, n);
	
	int index;
	//int insert_new;//переменная для вставление значение массива по индексу
	cout << "Введите индекса заменяемого элимента:"; cin >> index;
	//cout << "Введите новое значение заменяемого элимента:"; cin >> insert_new;
	arr= insert (arr, n, value, index);
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
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		// Обращение к элеентам массива через Арифметику указателей и оператор разыменования
		cout << *(arr + i) << "\t";
	}
	cout << endl;
}
int* push_back(int arr[],  int& n, int value)
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
int* push_front(int arr[], int& n, int value)
{
	int* buffer = new int[n + 1];
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
int* pop_back(int arr[], int& n)
{
	int* buffer=new int [--n];
	for (int i = 0; i < n; i++) buffer[i] = arr[i];
	delete[]arr;
	return buffer;
}
int* pop_front(int arr[], int& n)
{
	int* buffer = new  int[--n];
	for (int i = 0; i < n; i++) buffer[i] = arr[i+1];
	delete[]arr;
	return buffer;
}
int* insert(int arr[], int& n, int value, int index)
{
	int* buffer = new int[n +1];
	for (int i = 0; i < n; i++) //i < index ? buffer[i] = arr[i] : buffer[i + 1] = arr[i];
	{
		while (i<index)
		{
		buffer[i] = arr[i];
		}
		buffer[i+1] = arr[i];
	}
	buffer[index] = value;
	n++;
	delete[] arr;
	arr = buffer;
	return arr;
}