// Queue.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int n; // ���������� ��������
	char temp; // ��������� ���������
	queue<char> q1, q2; // �������
	printf("����� ���������� �������� ������ � �������? \n");
	cin >> n;
	printf("���������� �������: \n");
	for (int i = 0; i < n; i++) // ���������� ������� q1
	{
		cin >> temp;
		q1.push(temp);
	}
	cout << endl;
	q2 = q1; // ��������� �������
	printf("���������� �������: \n");
	for (int i = 0; i < n; i++) // ���������� ��� ���������� � �������.
	{
		cout << q1.front() << " | ";
		q1.pop();
	}
	cout << endl;
	printf("���������� �������: \n");
	for (int i = 0; i < n; i++) // ���������� ������� q1
	{
		cin >> temp;
		q1.push(temp);
	}
	printf("���������� ��������� ��������� �� ������ �������? \n");
	int m; // ���������� ��������� ���������
	cin >> m;
	for (int i = 0; i < m; i++) // �������� �� ������ �������
	{
		q2.pop();
	}
	for (int i = 0; i < m; i++) // ���������� ��������� �� ������� q1 � ������� q2
	{
		q2.push(q1.front());
		q1.pop();
	}
	printf("���������� ������ �������: \n");
	for (int i = 0; i < n; i++) // ���������� ��� ���������� � ��������.
	{
		cout << " | " << q2.front();
		q2.pop();
	}
	cout << endl;
	printf("���������� ������ �������: \n");
	for (int i = 0; i < n - m; i++)
	{
		cout << " | " << q1.front() << endl;
		q1.pop();
	}
	cout << endl;
	system("pause");
	return 0;
}

