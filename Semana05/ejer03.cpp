#include <iostream>
#include <stdio.h>
#include <ctime>
using namespace std;
int main()
{
    int op, max = 10, min = 0;
    srand(time(NULL));
    char resp;
    do
    {
        cout << "____________________________________________";
        cout << "\nBienvenido a calculadora basica";
        cout << "\n¿Que desea realiza? : ";
        cout << "\n\t\t1: Suma \n\t\t2: Resta\n\t\t3:Producto\n\t\t4:División\n";
        cout << "____________________________________________:  ";
        cin >> op;
        int a = (rand() % (max - min + 1)) + 1;
        int b = (rand() % (max - min + 1)) + 1;
        switch (op)
        {
        case 1:
            cout << "La Suma de " << a << "+" << b << " = " << (a + b);
            break;
        case 2:
            cout << "La Resta de " << a << "-" << b << " = " << (a - b);
            break;
        case 3:
            cout << "La Producto de " << a << "*" << b << " = " << (a * b);
            break;
        case 4:
            cout << "La División de " << a << "/" << b << " = " << (a / b);
            break;
        default:
            cout << "Operación desconocida!!";
            break;
        }
        cout << "\n¿Desea continuar s/n?";
        cin >> resp;
        if (tolower(resp) == 'n')
            break;
    } while (true);
    return 0;
}