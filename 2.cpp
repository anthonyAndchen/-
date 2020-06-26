#include<iostream>
#include<cmath>

#define MAX 10

using namespace std;



double A[MAX][MAX]; //系数矩阵

int NUM;            //A的阶数

int SIZE;           //最大迭代次数

int t;          //标记最大的数所在的行

double Max;     //比较每列时暂时存放最大的数

double tmp;     //用于交换时存放中间变量的

double tmp1;    //存储中间变量以减少计算量

int sign = 0;     //标记行交换的次数


/*


int main(void)

{

	int i, j, k;     //计数器

	//以下代码输入系数矩阵A,右端项b

	cout << "请输入行列式A的阶数：";

	cin >> NUM;

	SIZE = NUM;
	cout << "请输入A矩阵：\n";


	for (i = 1; i <= SIZE; i++)

	{

		for (j = 1; j <= SIZE; j++)

			cin >> A[i - 1][j - 1];

	}



	//在屏幕中输出用户输入的行列式A

	cout << "\n您输入的维度是:" << NUM << endl << "您输入的矩阵A[][]:\n";    //在屏幕中输出用户输入的矩阵A

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

		for (j = i + 1; j < SIZE; j++) //判断每列的最大数，并将其放到主对角线上

		{

			if (fabs(Max) < fabs(A[j][i]))

				//当某一行大于k时将其赋值给k，并将其所在行标记下来

			{

				Max = A[j][i];

				t = j;

			}

		}

		if (fabs(Max) < 0.000001) //判断矩阵是否为奇异阵

		{

			printf("行列式的值是: 0 ");

			break;

		}

		if (t != i)    //当t不等于i时交换这两行的所有元素

		{

			sign++;

			for (j = i; j <= SIZE; j++)

			{

				tmp = A[i][j];

				A[i][j] = A[t][j];

				A[t][j] = tmp;

			}

		}

		for (j = i + 1; j < SIZE; j++) //消去过程，化为上三角的形式

		{

			tmp1 = A[j][i] / A[i][i];      //tmp1避免了p每次变化时都要计算这个

			for (k = i; k < SIZE + 1; k++)        //p=i注意了啊！！

				A[j][k] = A[j][k] - A[i][k] * tmp1;

		}

	}

	tmp1 = 1;

	for (i = 0; i < SIZE; i++)      //求化简后行列式的值

		tmp1 *= A[i][i];

	if (sign % 2 == 0)

		cout << "行列式的值是：" << tmp1 << "\n";

	else

		cout << "行列式的值是：" << -tmp1 << "\n";



	return 0;

}
*/