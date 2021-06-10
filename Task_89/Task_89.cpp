#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Введіть n:\n";
    cin >> n;
    if (n >= 3)
    {
        //int length = n;
        int i;
        for (i = 1; i <= n; i++)
        {
            int zero = n - i;
            int j;
            for (j = 0; j < zero; j++)
            {
                cout << " 0 ";
            }
            cout << " " << i << " ";
            int k;
            for (k = zero + 1; k < n; k++)
            {
                cout << " 0 ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Помилка";
    }
    
}