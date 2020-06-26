#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

void transpose(int, double a[10][10]);
void show_matrix(int, double a[10][10]);
void orthogonize(int, double a[10][10]);
bool isInverse(int, double a[10][10]);
void exchange(int, int, double a[10][10]);
/*
int main(void)
{
	int dimention, i, j;
	bool judge;

	printf("Enter the dimention of the basis: ");
	scanf("%d", &dimention);

	double basis_matrix[10][10];

	printf("Input the basis (as rows of the matrix):\n");
	for (i = 0; i < dimention; i++)
		for (j = 0; j < dimention; j++)
			scanf("%lf", *(basis_matrix + i) + j);

	transpose(dimention, basis_matrix);

	printf("The matrix you input as follow:\n");
	show_matrix(dimention, basis_matrix);

	judge = isInverse(dimention, basis_matrix);

	if (!judge) {
		printf("The column vector of matrix can't consists of the basis!\n");
		exit(1);
	}

	printf("The standard orthogonal basis matrix as follow:\n");
	orthogonize(dimention, basis_matrix);
	show_matrix(dimention, basis_matrix);

	return 0;
}

void transpose(int dim, double matrix[10][10])
{
	int i, j;
	double replica[10][10];

	for (i = 0; i < dim; i++)
		for (j = 0; j < dim; j++)
			*(*(replica + i) + j) = *(*(matrix + i) + j);

	for (i = 0; i < dim; i++)
		for (j = 0; j < dim; j++)
			*(*(matrix + i) + j) = *(*(replica + j) + i);

	return;
}

void show_matrix(int dim, double matrix[10][10])
{
	int i, j;

	for (i = 0; i < dim; i++) {
		for (j = 0; j < dim; j++)
			printf("%-9.3f", *(*(matrix + i) + j));
		putchar('\n');
	}

	return;
}

void orthogonize(int dim, double matrix[10][10])
{
	int i, j, k;
	double numerator, demoninator;
	double proj_vector[10];

	for (i = 1; i < dim; i++) {
		for (k = 0; k < dim; k++)
			proj_vector[k] = 0;
		for (j = 0; j < i; j++) {
			numerator = demoninator = 0;
			for (k = 0; k < dim; k++) {
				numerator += matrix[k][i] * matrix[k][j];
				demoninator += matrix[k][j] * matrix[k][j];
			}
			for (k = 0; k < dim; k++)
				proj_vector[k] += numerator / demoninator * matrix[k][j];
		}
		for (k = 0; k < dim; k++)
			matrix[k][i] = matrix[k][i] - proj_vector[k];
	}

	for (i = 0; i < dim; i++) {
		demoninator = 0;
		for (j = 0; j < dim; j++)
			demoninator += matrix[j][i] * matrix[j][i];
		for (j = 0; j < dim; j++)
			matrix[j][i] = matrix[j][i] / sqrt(demoninator);
	}

	return;
}

bool isInverse(int dim, double matrix[10][10])
{
	double replica[10][10];
	double coef;
	int i, j, k;
	bool result = true;

	for (i = 0; i < dim; i++)
		for (j = 0; j < dim; j++)
			replica[i][j] = matrix[i][j];

	for (i = 0; i < dim - 1; i++) {
		exchange(dim, i, replica);
		if (fabs(replica[i][i]) < 0.00001) {
			result = false;
			break;
		}
		for (j = i + 1; j < dim; j++) {
			coef = replica[j][i] / replica[i][i];
			for (k = 0; k < dim; k++)
				replica[j][k] = replica[j][k] - coef * replica[i][k];
		}
	}

	if (fabs(replica[dim - 1][dim - 1]) < 0.00001)
		result = false;

	return result;
}

void exchange(int dim, int flag, double matrix[10][10])
{
	double temp[10];
	int i, j;

	for (i = flag + 1; i < dim; i++)
		if (fabs(matrix[flag][flag]) < fabs(matrix[i][flag])) {
			for (j = 0; j < dim; j++) {
				temp[j] = matrix[flag][j];
				matrix[flag][j] = matrix[i][j];
				matrix[i][j] = temp[j];
			}
		}

	return;
}*/