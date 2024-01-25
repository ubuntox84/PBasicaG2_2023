#include<iostream>
using namespace std;
int main(){
    int a=10,b,c;
    a++;
    b=a++;
    c=++b;
    cout<<a+b+c;
    return 0;
}