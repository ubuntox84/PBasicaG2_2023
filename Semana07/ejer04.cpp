#include <iostream>
#include <vector>
using namespace std;

struct Perro{
    string name;
    int age;
    string breed;
    char gender;
};

int main()
{
    Perro dog1;
    cout<<"Ingrese un nombre: ";
    getline(cin, dog1.name);
    cout<<"Ingrese la edad: ";
    cin>>dog1.age;
    cin.ignore();
    cout<<"Ingrese la raza del Perro: ";
    getline(cin, dog1.breed);
    cout<<"Ingrese la sexo: ";
    cin>>dog1.gender;
    cout<<"\nMostramos informacion: "<<endl;
    cout<<dog1.name<<endl;
    cout<<dog1.breed<<endl;
    cout<<dog1.age<<endl;
    cout<<dog1.gender<<endl;

    return 0;
}