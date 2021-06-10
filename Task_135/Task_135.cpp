#include <iostream>
#include <time.h>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	cout << "Enter integer value: ";
	cin >> n;
	int* MainArr = new int[n*n];
	int* SumArr = new int[n];
	srand(time(NULL));
	int num = 0;
	for (int j = 0; j < n; j++)
	{
		SumArr[j] = 0;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
		MainArr[j+num] = rand() % 100;
		cout << setw(4) << MainArr[j + num] << " ";
		SumArr[i] += MainArr[j + num];
		}
		num += n;
		cout << endl;
	}
	cout << "Масив сум: ";
	for (int j = 0; j < n; j++)
	{
		cout << SumArr[j] << " ";
	}
	delete[] SumArr;
	delete[] MainArr;
}