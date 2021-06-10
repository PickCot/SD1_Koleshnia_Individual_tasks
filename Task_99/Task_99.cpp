#include <string>
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    cout << "Введіть n:\n";
    cin >> n;
    int i, j, k = 0;
    for (i = 1; i <= n; i++)
    {
        j = i;
        while (j > 1)
        {
          cout << setw(5) << j;
          j--;
          k++;
        }
        while (k < n)
        {
            cout << setw(5) << j;
            j++;
            k++;
        }
        cout << endl;
        k = 0;
    }
}