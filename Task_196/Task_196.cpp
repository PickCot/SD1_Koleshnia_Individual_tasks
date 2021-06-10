#include <iostream>
using namespace std;
void Plus(int a1, int a2, int b1, int b2)
{
    int c1, c2;
    c1 = a1 - b1;
    c2 = a2 - b2;
    cout << "Додавання векторів А і В: C(" << c1 << ";" << c2 <<").\n";
}
void Minus(int a1, int a2, int b1, int b2)
{
    int c1, c2;
    c1 = a1 + b1;
    c2 = a2 + b2;
    cout << "Різниця векторів А і В: C(" << c1 << ";" << c2 << ").\n";
}
void ScalarProduct(int a1, int a2, int b1, int b2)
{
    int c;
    c = a1 * b1 + a2 * b2;
    cout << "Скалярний добуток: " << c << endl;
}
void Length(int a1, int a2, int b1, int b2)
{
    double a, b;
    a = sqrt(a1 + a2);
    b = sqrt(b1 + b2);
    cout << "Довжина вектора А: " << a << "\nДовжина вектора B: " << b << endl;
}
void Product(int a1, int a2, int b1, int b2)
{
    int a3, a4, b3, b4, k;
    cout << "Введіть кофіцієнт.";
    cin >> k;
    a3 = a1 * k;
    a4 = a2 * k;
    b3 = b1 * k;
    b4 = b2 * k;
    cout << "Скалярний добуток: Вектора А(" << a3 <<";"<< a4 << ") і вектора В(" << b3 <<";"<< b4 << ")." << endl;
}
int main()
{
    int a1, a2, b1, b2;
    cout << "Введіть кординати вектора A.\n";
    cin >> a1 >> a2;
    cout << "Введіть кординати вектора B.\n";
    cin >> b1 >> b2;
    Plus(a1, a2, b1, b2);
    Minus(a1, a2, b1, b2);
    ScalarProduct(a1, a2, b1, b2);
    Length(a1, a2, b1, b2);
    Product(a1, a2, b1, b2);
}