#include <iostream>
	using namespace std;

	int main()
	{
		int num;
		cout << "Enter integer value: ";
		cin >> num;

		int* MainArr = new int[num];
		
		int z = 0;
		int o = 0;
		for (int i = 0; i < num; i++) 
		{
			MainArr[i] = i;
			cout << "Value of " << i << " element is ";
			cin >> MainArr[i];
			if (MainArr[i] == 0)
			{
				z++;
			}
			else if (MainArr[i] == 1)
			{
				o++;
			}
		}
		
		for (int i = 0; i < z; i++)
		{
			cout << 0 << " ";
		}
		for (int i = 0; i < o; i++)
		{
			cout << 1 << " ";
		}
		delete[] MainArr;
		return 0;
	}