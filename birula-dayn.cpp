#include<iostream>
using namespace std;

int main()
{
    double a, b, c, d, e;

    cout << "Ведіть значення а";
    cin >> a;
    cout << "Ведіть значення b";
    cin >> b;
    cout << "Ведіть значення c";
    cin >> c;
    cout << "Ведіть значення d";
    cin >> d;
    cout << "Ведіть значення e";
    cin >> e;

    double result = (a / c) + (b / b) + (1.0 / e);
    cout<< "Результат:" << result << endl;
}