#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	const int D = 4; // 1 массив
	const int C = 6; // 2 массив
	int A[D][C];
	for (int i = 0; i < D; i++)
	{
		for (int j = 0; j < C; j++)
		{
			A[i][j] = i + j;
			cout << A[i][j] << ' ';
		}
		cout << endl;
	}
	cout << endl;

	int sum = 0; // для суммы элементов в строке
	time_t t;
	time(&t);
	int day = localtime(&t)->tm_mday; // день месяца

	for (int x = 0; x < C; x++)
	{
		sum += A[day % C][x];
	}
	cout << sum << endl;

	return 0;
}