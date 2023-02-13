#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "Rus");
    int a, b;
    cout << "Введите первое число: " << endl;
    cin >> a;
    cout << "Введите второе число: " << endl;
    cin >> b;
    if (a > b)
        cout << "Больше." << endl;
    else if (a < b)
        cout << "Меньше." << endl;
    else
        cout << "Равны." << endl;
}