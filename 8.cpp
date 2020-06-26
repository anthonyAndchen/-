#include<iostream>
#include<random>
using namespace std;
int main()
{
	double r = 0, f = 0;
	static uniform_int_distribution<int>u(1, 2);
	static default_random_engine e;
	cout << "此模拟实验以1代表正面，2代表反面：" << endl;
	for (int i = 0; i < 100; ++i)
	{
		int t = u(e);
		if (t == 1)
			r++;
		if (t == 2)
			f++;
		cout << t << endl;
	}
	cout << endl << "正面出现5次概率为：0.1754" << endl;
}