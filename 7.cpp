#include<iostream>
#include<random>
using namespace std;
/*
int main()
{
	double boy = 0, girl = 0;
	static uniform_int_distribution<int>u(1, 2);
	static default_random_engine e;
	cout << "此模拟实验以1代表所生男孩，2代表所生女孩（共100个）：" << endl;
	for (int i = 0; i < 10000; ++i)
	{
		int t = u(e);
		if (t == 1)
			boy++;
		if (t == 2)
			girl++;
		cout << t << endl;
	}
	cout << endl << "生男孩概率为：" << boy / 100 << "\n生女孩概率为：" << girl / 100 << endl;
}*/
/*
int main()
{
	cout << "一单位有甲、乙两人，已知甲近期出差的概率为80%，若甲出差，则乙出差的概率为20%；"
		"若甲不出差，则乙出差的概率为90%。" << endl;

	double Pa = 0.8, Pba = 0.2, PbA = 0.9;
	double PA = 1 - Pa;
	double PAB = Pa * Pba;
	double P2 = PA * PbA;
	double Pb = PbA + PAB;

	cout << "近期乙出差的概率: " << Pb << endl;
	double ab = PAB / Pb;
	cout << "甲出差的概率: " << ab << endl;
}
*/