#include<iostream>
#include<random>
using namespace std;
int main()
{
	double r = 0, f = 0;
	static uniform_int_distribution<int>u(1, 2);
	static default_random_engine e;
	cout << "��ģ��ʵ����1�������棬2�����棺" << endl;
	for (int i = 0; i < 100; ++i)
	{
		int t = u(e);
		if (t == 1)
			r++;
		if (t == 2)
			f++;
		cout << t << endl;
	}
	cout << endl << "�������5�θ���Ϊ��0.1754" << endl;
}