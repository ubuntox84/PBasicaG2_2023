#include<iostream>
using namespace std;
int main(){
    int a=10,b=5,c;
    a--;
    --b;
    c=a--+--b;
    cout<<a+b+c;
    return 0;
}