#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    const int n = 50;
    int mas[n];
    int i = 0;
    int sum = 0;
    cout << "Масив\n";
    while (i < n)
    {
        mas[i] = 1 + rand() % 100;
        if (mas[i] % 2 == 0)
        {
            sum += mas[i];
        }
        cout << mas[i] << " ";
        i++;
    }
    cout << "\nСума парних елементів масиву: " << sum;
    return 0;
}