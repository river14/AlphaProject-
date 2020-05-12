#include "iostream"
#include "cstdlib"


using namespace std; 

int main (void)
{
    float num1, num2, num3, promedio;

    cout<< "PROMEDIO DE 3 NUMEROS";
    cout<<endl;
    cout<<endl;

    cout<< "Ingresa el primer numero:";
    cin>>num1;
    cout<<endl;

    cout<< "Ingresa el segundo numero:";
    cin>>num2;
    cout<<endl;

    cout<< "Ingresa el tercer numero:";
    cin>>num3;
    cout<<endl;

    promedio = (num1 + num2 + num3)/3.0;
    cout<< "El promedio es: " << promedio << endl;

    system("pause");
    return 0;

}
