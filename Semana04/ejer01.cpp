#include <iostream>
using namespace std;
int main()
{
    int x;
    cout<<"ingresar valor";
    cin>>x;
    if(x==0)
        cout<<"Es cero";
        else if(x>0)
        cout<<x<<" es Mayor a cero";
        else
        cout<<x<<" es Menor a cero";
    return 0;
}
