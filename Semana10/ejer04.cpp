
#include <iostream>
#include <vector>
#include <ctime>
#define N 10
using namespace std;
void llenar(int v[]){
    srand(time(NULL));
    for (int i = 0; i < N; i++)
    {
        v[i]=1+(rand()%(9-1+1));
    }    
}
void mostrar(int v[]){
    for (int i = 0; i <N; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;    
}
void ordenar(int v[]){
    int temp;
    for (int i = 0; i < N-1; i++)
    {
        for (int j = i+1; j < N-1; j++)
        {
            if(v[i]>v[j]){
                temp=v[i];
                v[i]=v[j];
                v[j]=temp;
            }
        }
        
    }
    
}
int main(){
    int v[N];
    llenar(v);
    mostrar(v);
    ordenar(v);
    mostrar(v);
    return 0;
}