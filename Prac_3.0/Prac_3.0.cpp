#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int n = 0;
    int j;
    char mas[100];
    cout << "Введіть прізвище\n";
    cin.getline(mas, 30);
    int t = 0;

    for (int i = 0; mas[i] != '\0'; i++)
        if (isalpha(mas[i]))
            t++;

    cout << t << endl;
    cout << "Ваше прізвище складається з " << t << " літер.\n";
    for (int i = 0; i < t; i++)
    {
        if ((mas[i] == 'a') || (mas[i] == 'o'))
        {
            for (j = i; j < t - 1; j++)
            {
                mas[j] = mas[j + 1];
            }
            mas[j] = 0;
            t--;
            i--;
        }
    }
    cout << "Прізвище без літер а та о.\n";
    cout << mas;
}