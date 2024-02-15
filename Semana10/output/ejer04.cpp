//suma de 5 variables 
#include <iostream>
#include <vector>
#include <ctime>
using namespace std;
int suma(int x,int y, int z){
    return x+y+z;
}
int suma(char x,int y, int z){
    return 'a';
}
int suma(int x, int y){
    return x+y;
}
int suma(int x){
    return x;
}
int main(){
    cout<<"La suma es: "<<suma(5,2);
    return 0;
}