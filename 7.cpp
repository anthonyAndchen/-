#include<iostream>
#include<random>
using namespace std;
/*
int main()
{
	double boy = 0, girl = 0;
	static uniform_int_distribution<int>u(1, 2);
	static default_random_engine e;
	cout << "��ģ��ʵ����1���������к���2��������Ů������100������" << endl;
	for (int i = 0; i < 10000; ++i)
	{
		int t = u(e);
		if (t == 1)
			boy++;
		if (t == 2)
			girl++;
		cout << t << endl;
	}
	cout << endl << "���к�����Ϊ��" << boy / 100 << "\n��Ů������Ϊ��" << girl / 100 << endl;
}*/
/*
int main()
{
	cout << "һ��λ�мס������ˣ���֪�׽��ڳ���ĸ���Ϊ80%�����׳�����ҳ���ĸ���Ϊ20%��"
		"���ײ�������ҳ���ĸ���Ϊ90%��" << endl;

	double Pa = 0.8, Pba = 0.2, PbA = 0.9;
	double PA = 1 - Pa;
	double PAB = Pa * Pba;
	double P2 = PA * PbA;
	double Pb = PbA + PAB;

	cout << "�����ҳ���ĸ���: " << Pb << endl;
	double ab = PAB / Pb;
	cout << "�׳���ĸ���: " << ab << endl;
}
*/