#include "iostream"
#include "cstdlib"
#include "string"

using namespace std;

int main(void)
{
    cout<<"SUPERMERCADO EN LINEA";
    cout<<endl;
    cout<<endl;

    float precio;
    int cantidad;
    string producto; 

    cout<<"Ingrese el nombre del producto:";
    cin>>producto;
    cout<<endl;
    cout<<endl;
    
    cout<<"Precio ($): ";
    cin>>precio;
    cout<<endl;
    cout<<endl;

    cout<<"Ingrese la cantidad que desea comprar: ";
    cin>>cantidad;
    cout<<endl;

    cout<<"Total a pagar: " <<precio*cantidad;
    cout<<endl;

    system("pause");
    return 0;


    
    
}
