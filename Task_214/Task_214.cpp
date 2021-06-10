#include <iostream>
using namespace std;
int Factorial(int x)
{
    long int f = 1;
    for (int j = x; j > 0; j--)
    {
        f *= j;
    }
    return f;
}
int main()
{
    long int n, i;
    long int res = 0;
    cout << "Введіть n.\n";
    cin >> n;
    while(n > 0)
    {
        res+= Factorial(n);
        n-=2;
    }
    
    cout << "Результат: " << res;
}