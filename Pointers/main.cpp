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
	cout << a << endl;//������� �������� ���������� '�'
	cout << &a << endl;// ������ ������ ���������� '�' ����� ��� ������ ���������� 
	cout << pa << endl;// ����� ������ ���������� '�' ������������ � ���������� '��'
	cout << *pa << endl;// ������������� ��������� '��'� ��������� �������� 

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
	//1. ��������� ����������� ��������� ���������� ����� ������ ���� ����������� ������ ���������� 8 ����;

	// �=2; n=8*8=64 
	//2 � 64�� = 2�60��*2�4�� = 1 ��������*16= 16 ��������


	//2. �������� ������� int Sum(int n ...), ������� ��������� ������������ ����� ����������, � ���������� ����� ���� �������� ����������;
	//����� �������� ��� ������� ������� ������������ ���� ����������, ���������� � ����� ������ ����������� ���������� ��������� ...
	//	��������:
	//int Sum(int n ...);
	//�����!!!
	//	��������� ����������� ����� �������������� � ����������� x86(!!!�� x64!!!)

	t n = 6;
	cout << "����� ����������� ���������� =" << *p << endl;


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