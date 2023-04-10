#include"Action.h"

template <typename T> T* push_back(T arr[], T& n, T value)
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
template <typename T> T* push_front(T arr[], T& n, T value)
{
	T* buffer = new int[n + 1];
	for (int i = 0; i < n; i++)
	{
		buffer[i + 1] = arr[i];
	}
	delete[] arr;
	arr = buffer;
	arr[0] = value;
	n++;
	return arr;
}
template <typename T> T* pop_back(T arr[], T& n)
{
	T* buffer = new int[--n];
	for (int i = 0; i < n; i++) buffer[i] = arr[i];
	delete[]arr;
	return buffer;
}
template <typename T> T* pop_front(T arr[], T& n)
{
	T* buffer = new  int[--n];
	for (int i = 0; i < n; i++) buffer[i] = arr[i + 1];
	delete[]arr;
	return buffer;
}
//добавление элимента по индексу
template <typename T> T* insert(T arr[], T& n, T value, T index_ins)
{
	T* buffer = new int[n + 1];
	for (int i = 0; i < n; i++)
	{
		if (i < index_ins)
		{
			buffer[i] = arr[i];
		}
		buffer[i + 1] = arr[i];
	}
	delete[] arr;
	arr = buffer;
	buffer[index_ins - 1] = value;
	n++;
	return arr;
}
//удаление элимента по индексу
template <typename T> T* erase(T arr[], T& n, T index_er)
{
	T* buffer = new int[n - 1];
	for (int i = 0; i < n; i++)
	{
		if (i < index_er)
		{
			buffer[i] = arr[i];
		}
		buffer[i + 1] = arr[i + 2];
	}
	delete[]arr;
	arr = buffer;
	n--;
	return arr;
}
