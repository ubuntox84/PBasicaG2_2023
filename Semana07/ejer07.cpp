#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int x=10;
    int *p;
    p=&x;
    cout<<"valor de X: "<<x<<endl;
    cout<<"Direccion de X: "<<&x<<endl;
    cout<<"Direccion del puntero:"<<p<<endl;
    cout<<"Valor que apunta el puntero: "<<*p<<endl;
    *p=25;
    cout<<"valor de X: "<<x<<endl;
    cout<<"Direccion de X: "<<&x<<endl;
    return 0;
}