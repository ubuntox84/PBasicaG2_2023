#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    int *p;
    int *q;
    p = &x;
    q=&x;
    cout << "Valor:\t" << x << "\nDireccion:\t" << &x << endl;
    cout << "Valor:\t" << *p << "\nDireccion:\t" << p << endl;
    *p = 20;
    cout << "Valor:\t" << x << "\nDireccion:\t" << &x << endl;
    return 0;
}