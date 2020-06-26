#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int n = 3;
int m = 6;
int z[6][3];

int against(int a[]);
int fac(int a);
void perm(int a[], int p, int q);
void swap(int a[], int i, int j);

/*
int main()
{
	int a[3][3];
	int d[3];
	for (int i = 0; i < n; ++i)
	{
		d[i] = i;
	}
	cout << "Please Input A Matrix : " << endl;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
		{
			cin >> a[i][j];
		}
	perm(d, 0, n - 1);
	int s;
	int m = 0;
	for (int i = 0; i < fac(n); ++i)
	{
		s = 1;
		for (int j = 0; j < n; ++j)
		{
			s *= a[j][z[i][j]];
		}
		m += pow(-1, against(z[i])) * s;
	}

	cout << "The Value of Det is : " << m << endl;
	return 0;
}
*/

int fac(int a)
{
	int s = 1;
	for (; a >= 1; a--)
		s = s * a;
	return s;
}

int against(int a[])
{
	int c = 0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{
			if (a[i] > a[j])
				++c;
		}
	}
	return c;
}

void swap(int a[], int i, int j)
{
	int temp;
	temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}
void perm(int a[], int p, int q)
{
	static int g = 0;
	if (p == q)
	{
		for (int i = 0; i < n; ++i)
		{
			z[g][i] = a[i];
		}
		++g;
	}
	else {
		for (int i = p; i <= q; ++i)
		{
			swap(a, p, i);
			perm(a, p + 1, q);
			swap(a, p, i);
		}
	}
}