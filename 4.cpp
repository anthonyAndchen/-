#include<iostream>
#include<random>
using namespace std;

int Rotate()
{
	int A[10][10] = { 0 }, result[10][10] = { 0 };
	int row, col;
	static default_random_engine e;
	static uniform_int_distribution<int> u(0, 10);
	cout << "请输入A矩阵的行数和列数（小于10）：";
	cin >> row >> col;
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			A[i][j] = u(e);
		}
	}

	cout << "\nA矩阵 = " << endl;
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			cout << A[i][j] << "\t";
		}
		cout << endl;
	}

	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			result[j][i] = A[i][j];
		}
	}

	cout << "\nA转置矩阵 = " << endl;
	for (int i = 0; i < col; ++i)
	{
		for (int j = 0; j < row; ++j)
		{
			cout << result[i][j] << "\t";
		}
		cout << endl;
	}
	return 0;
}
/*
int main()
{
	int A[10][10] = { 0 };
	int r;
	cout << "请输入此单位矩阵的阶数（小于10）：";
	cin >> r;
	for (int i = 0; i < r; ++i)
	{
		A[i][i] = 1;
	}

	cout << "单位阵A = " << endl;
	for (int i = 0; i < r; ++i)
	{
		for (int j = 0; j < r; ++j)
		{
			cout << A[i][j] << "\t";
		}
		cout << endl;
	}
}*/