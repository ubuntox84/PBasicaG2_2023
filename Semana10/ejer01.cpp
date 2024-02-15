//suma de 5 variables 
#include <iostream>
#include <vector>
#include <ctime>
using namespace std;
int valoraleatorio(){    
    return 1+(rand()%(9-1+1));
}
void sumar(int a,int b,int c,int d,int e,int &resp){
    resp=a+b+c+d+e;
}
int main()
{
    int a,b,c,d,e,resp;
    srand(time(NULL));
    a=valoraleatorio();
    b=valoraleatorio();
    c=valoraleatorio();
    d=valoraleatorio();
    e=valoraleatorio();
    sumar(a,b,c,d,e,resp);
    cout<<"La suma de "<<a<<"+"<<b<<"+"<<c<<"+"<<d<<"+"<<e<<"="<<resp;
    return 0;
}