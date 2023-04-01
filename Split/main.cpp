#include<iostream>
using namespace std;

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");

	int n;
	cout << "Введите количество элементов массива : "; cin >> n;
	int* arr = new int[n];
	FillRand(arr, n);
	Print(arr, n);

	int even = 0;
	int	odd = 0;
	
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)
		{
			even++;
		}
		else odd++;
	}
	//cout << "количество четных элементов: " << even << endl;
	//cout << "количество нечетных элементов: " << odd << endl;

	//2) Выделяем память для массивов:
	int* even_arr = new int[even];
	int* odd_arr = new int[odd];

	//3) Копируем значения в соответствующие массивы:
	for (int i = 0, j = 0, k = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)
		{
			even_arr[j++] = arr[i];
		}
		else odd_arr[k++] = arr[i];
		//(arr[i] % 2 == 0 ? even_arr[j++] : odd_arr[k++]) = arr[i];
	}

	//4) Выводим результаты на экран:
	Print(even_arr, even);
	Print(odd_arr, odd);

	delete[] even_arr;
	delete[] odd_arr;
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
