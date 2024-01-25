#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(time(NULL));
    int x;
    int contador=0;
    int num_aletorio= rand() % (10-1+1) + 1;
    cout << "¡Bienvenido al juego Adivina el Número!\n";
    while (true)
    {
        cout<<"ingrese tu intento: ";
        cin>>x;
        if(x==num_aletorio){
            cout<<"Correcto adivinaste el numero!!";
            break;
        }else if(x<num_aletorio)
            cout<<"El numero a adivinar es mayor";
            else
            cout<<"El numero a adivinar es menor";
        
        if(contador==3){
            cout<<"\n**********\nGame Over\n**********";
            break;
        }
        cout<<"\nnumero de intento: "<<++contador<<endl;
    }
    cout<<"\nHasta pronto!!";
    
    return 0;
}