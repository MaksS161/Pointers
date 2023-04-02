#include<iostream>
using namespace std;

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);
int* push_back(int arr[], int &n, int value);
int* push_front(int arr[], int &n, int value);

int* pop_back(int arr[], int &n);
int* pop_front(int arr[], int &n);

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "������� ������ ������� :"; cin >> n;

	int* arr = new int[n];
	FillRand(arr, n);
	Print(arr, n);

	int value;
	cout << "������� ������������ ��������: "; cin >> value;
	//1. ������� �������� ������ ������� ������� 
	
	arr= push_back(arr, n, value);
	Print(arr, n);
	arr= push_front(arr, n, value);
	Print(arr, n);

	arr = pop_back(arr, n);
	Print(arr, n);
	
	arr = pop_front(arr, n);
	Print(arr, n);
	delete[] arr;
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		// ��������� � �������� ������� ����� �������� �������������� []
		arr[i] = rand() % 100;
	}
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		// ��������� � �������� ������� ����� ���������� ���������� � �������� �������������
		cout << *(arr + i) << "\t";
	}
	cout << endl;
}
int* push_back(int arr[],  int& n, int value)
{
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
