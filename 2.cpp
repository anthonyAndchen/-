#include<iostream>
#include<cmath>

#define MAX 10

using namespace std;



double A[MAX][MAX]; //ϵ������

int NUM;            //A�Ľ���

int SIZE;           //����������

int t;          //������������ڵ���

double Max;     //�Ƚ�ÿ��ʱ��ʱ���������

double tmp;     //���ڽ���ʱ����м������

double tmp1;    //�洢�м�����Լ��ټ�����

int sign = 0;     //����н����Ĵ���


/*


int main(void)

{

	int i, j, k;     //������

	//���´�������ϵ������A,�Ҷ���b

	cout << "����������ʽA�Ľ�����";

	cin >> NUM;

	SIZE = NUM;
	cout << "������A����\n";


	for (i = 1; i <= SIZE; i++)

	{

		for (j = 1; j <= SIZE; j++)

			cin >> A[i - 1][j - 1];

	}



	//����Ļ������û����������ʽA

	cout << "\n�������ά����:" << NUM << endl << "������ľ���A[][]:\n";    //����Ļ������û�����ľ���A

	for (i = 0; i < SIZE; i++)

	{

		for (j = 0; j < SIZE; j++)

			cout << A[i][j] << "\t";

		cout << "\n\n";

	}



	for (i = 0; i < SIZE - 1; i++)

	{

		t = i;

		Max = A[i][i];

		for (j = i + 1; j < SIZE; j++) //�ж�ÿ�е��������������ŵ����Խ�����

		{

			if (fabs(Max) < fabs(A[j][i]))

				//��ĳһ�д���kʱ���丳ֵ��k�������������б������

			{

				Max = A[j][i];

				t = j;

			}

		}

		if (fabs(Max) < 0.000001) //�жϾ����Ƿ�Ϊ������

		{

			printf("����ʽ��ֵ��: 0 ");

			break;

		}

		if (t != i)    //��t������iʱ���������е�����Ԫ��

		{

			sign++;

			for (j = i; j <= SIZE; j++)

			{

				tmp = A[i][j];

				A[i][j] = A[t][j];

				A[t][j] = tmp;

			}

		}

		for (j = i + 1; j < SIZE; j++) //��ȥ���̣���Ϊ�����ǵ���ʽ

		{

			tmp1 = A[j][i] / A[i][i];      //tmp1������pÿ�α仯ʱ��Ҫ�������

			for (k = i; k < SIZE + 1; k++)        //p=iע���˰�����

				A[j][k] = A[j][k] - A[i][k] * tmp1;

		}

	}

	tmp1 = 1;

	for (i = 0; i < SIZE; i++)      //�󻯼������ʽ��ֵ

		tmp1 *= A[i][i];

	if (sign % 2 == 0)

		cout << "����ʽ��ֵ�ǣ�" << tmp1 << "\n";

	else

		cout << "����ʽ��ֵ�ǣ�" << -tmp1 << "\n";



	return 0;

}
*/