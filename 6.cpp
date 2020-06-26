#include<cstdlib>
#include<iostream>
using namespace std;
const int maxn = 2e5 + 10;
#define ll long long
#define _for(i, x, n) for(int i = x; i <= n; i++)

void LOOP(float a[20][20], float u[20], int);
float MAX(float u[20], int);
/*
int main()
{
	float a[20][20], u[20], x[20], y, z;
	int i, j, n;
	printf("阶数:");
	scanf("%d", &n);
	printf("元素值：");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%f", &a[i][j]);
		}
	}
	printf("迭代向量:");
	for (i = 0; i < n; i++)
		scanf("%f", &u[i]);

	y = MAX(u, n);
	for (int cnt = 1; cnt <= 3; cnt++)
	{
		z = y;
		LOOP(a, u, n);
		y = MAX(u, n);
		for (i = 0; i < n; i++)
		{
			x[i] = u[i] / y;
			u[i] = x[i];
		}
		cout << "过程的特征值" << y << endl;
	}
	printf("矩阵的特征值:%f\n", y);
	printf("矩阵的特征向量:");
	for (int i = 0; i < n; i++)
	{
		printf("%f ", x[i]);
	}
	return 0;
}

void LOOP(float a[20][20], float u[20], int n)
{
	float S, U[20];
	int i, j;
	for (int i = 0; i < n; i++)
	{
		U[i] = u[i];
	}
	for (int i = 0; i < n; i++)
	{
		S = 0.0;
		for (int j = 0; j < n; j++)
		{
			S = S + a[i][j] * U[j];
		}
		u[i] = S;
	}
}
float MAX(float u[20], int n)
{
	float maxi;
	int i;
	maxi = u[0];
	for (i = 0; i < n; i++)
	{
		if (u[i] > maxi)
		{
			maxi = u[i];
		}
	}
	return maxi;
}
/*
3
1 -1 0
-2 4 -2
0 -1 1
1 0 0
*/
/*
int main()
{
	int n, i, j, t;
	int a[20][20];
	cin >> n;
	{
		t = 1;
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				cin >> a[i][j];
			}
		}
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				if (a[i][j] != a[j][i])
				{
					t = 0;
					break;//只要一次不相等就不是对称矩阵，就可以跳出整个循环
				}
			}
		}
		if (t == 0)
			cout << "不是对称矩阵" << endl;
		else
			cout << "是对称矩阵" << endl;
	}
	return 0;

}
*/