#include<iostream>
#include<random>
using namespace std;
/*
int main()
{
	int A[10][10] = { 0 }, B[10][10] = { 0 }, result[10][10] = { 0 };
	int row1, col1;
	int row2, col2;
	static default_random_engine e;
	static uniform_int_distribution<int> u(0, 10);
	cout << "请输入A矩阵的行数和列数（小于10）：";
	cin >> row1 >> col1;
	for (int i = 0; i < row1; ++i)
	{
		for (int j = 0; j < col1; ++j)
		{
			A[i][j] = u(e);
		}
	}
	cout << "\n" << endl;
	cout << "请输入B矩阵的行数和列数（小于10）：";
	cin >> row2 >> col2;
	for (int i = 0; i < row2; ++i)
	{
		for (int j = 0; j < col2; ++j)
		{
			B[i][j] = u(e);
		}
	}

	cout << "A矩阵 = " << endl;
	for (int i = 0; i < row1; ++i)
	{
		for (int j = 0; j < col1; ++j)
		{
			cout << A[i][j] << "\t";
		}
		cout << endl;
	}


	cout << endl << "B矩阵 = " << endl;
	for (int i = 0; i < row2; ++i)
	{
		for (int j = 0; j < col2; ++j)
		{
			cout << B[i][j] << "\t";
		}
		cout << endl;
	}

	if (col1 == row2) //第一个矩阵的列数与第二个矩阵的行数相等时，两个矩阵才能相乘；
	{
		for (int i = 0; i < row1; i++)  //a的行数
		{
			for (int j = 0; j < col2; j++)      //b的列数
			{
				for (int k = 0; k < col1; k++)  //a的列数
				{
					result[i][j] += A[i][k] * B[k][j];
				}
			}
		}

		cout << "结果为 result = " << endl;
		for (int i = 0; i < row1; ++i)
		{
			for (int j = 0; j < col2; ++j)
			{
				cout << result[i][j] << "\t";
			}
			cout << endl;
		}
	}
	else
		cout << "行列数不匹配\n";
}
*/