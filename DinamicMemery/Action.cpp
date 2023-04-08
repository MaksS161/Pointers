#include"Action.h"

template <typename T> T* push_back(int arr[], T& n, T value)
{
	//1. ������� �������� ������ ������� ������� 
	int* buffer = new int[n + 1];
	//2. �������� ��� �������� �� ��� � �������� 
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	//3 ������� ���. ������
	delete[] arr;
	//4. ��������� ����� ������� ������� ���. ������ 
	arr = buffer;
	//������ ����� ����� � ������ 'arr' ����� �������� ��������
	arr[n] = value;
	//5.������ ����� ����� ��������� � ������ 'arr' ��������:
	n++;
	//6. ���������� ����� ������
	return arr;
}
template <typename T> T* push_front(int arr[], T& n, T value)
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
template <typename T> T* pop_back(int arr[], T& n)
{
	T* buffer = new int[--n];
	for (int i = 0; i < n; i++) buffer[i] = arr[i];
	delete[]arr;
	return buffer;
}
template <typename T> T* pop_front(int arr[], T& n)
{
	T* buffer = new  int[--n];
	for (int i = 0; i < n; i++) buffer[i] = arr[i + 1];
	delete[]arr;
	return buffer;
}
//���������� �������� �� �������
template <typename T> T* insert(int arr[], T& n, T value, T index_ins)
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
//�������� �������� �� �������
template <typename T> T* erase(int arr[], T& n, T index_er)
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
