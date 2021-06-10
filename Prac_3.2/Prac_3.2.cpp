#include <iostream>
using namespace std;
int main()
{
    char s[10];
    int slovo, count = 0;
    cout << "Введите символ" << endl;
    int i = 0;
    while (i<10)
    {
        cin >> s[i];
        i++;
    }
    cout << endl;
    for (i = 0; i < 10; i++)
    {
        cout << s[i];
    }
}