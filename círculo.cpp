#include "iostream"
#include "cstdlib"
#include "cmath"

using namespace std;

int main(void)
{
    const float pi = 3.1416;
    float radio;

    cout<<"AREA Y PERIMETRO DE UN CIRCULO";
    cout<<endl;
    cout<<endl;

    cout<<"Ingresa el radio de tu circulo:";
    cin>>radio;
    cout<<endl;
    cout<<"El perimetro es:" << 2*pi*radio << endl;
    cout<<endl;

    {
        float base, exponente, resultado;

        base = radio;
        exponente = 2;
        resultado = pow(base, exponente);


    }

    cout<<"El area es:" << pow(radio, 2)*pi ;
    cout<<endl;

    system("pause");
    return 0;

}