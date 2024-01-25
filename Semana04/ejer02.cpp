#include <iostream>
using namespace std;
int main()
{
    int x;
    cout<<"ingresar valor";
    cin>>x;
    if(x==0)
        cout<<"Es cero";
    if(x>0)
        cout<<x<<" es Mayor a cero";
    if(x<0)
        cout<<x<<" es Menor a cero";
    return 0;
}