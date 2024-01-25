#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    int mayor;
    cout<<"Ingresar 3 numeros";
    cin>>a>>b>>c;
    mayor=a;
    if(mayor<b)
        mayor=b;
    if(mayor<c)
        mayor=c;
    cout<<"El mayor es: "<<mayor;
    return 0;
}