#include "iostream"
#include "cmath"
#include "cstdlib"

using namespace std;

int main (void)
{
    float a, b, c, det, resultado1 = 0, resultado2 = 0, ima1 = 0, ima2 = 0;

    cout<<"FORMULA CUADRATICA";
    cout<<endl;
    cout<<endl;
    
    cout<<"Ingresa el valor de a: ";
    cin>>a;
    cout<<endl;

    cout<<"Ingresa el valor de b: ";
    cin>>b;
    cout<<endl;

    cout<<"Ingresa el valor de c: ";
    cin>>c;
    cout<<endl;

    det = (pow(b, 2)-4.00*a*c);

        if (det>=0)
        {  
        resultado1 = (-b+sqrt(det))/(2*a);
        resultado2 = (-b-sqrt(det))/(2*a);
 
        cout<<"La raiz 1 es: "<<resultado1<<endl;
        cout<<"La raiz 2 es: "<<resultado2<<endl;
        }
    
        else
        {
        resultado1 = (-b)/(2*a);
        resultado2 = (-b)/(2*a);
        det = -1*(det);
        ima1= (pow(det,0.5))/(2*a);
        ima2= ((-1)*pow(det,0.5))/(2*a);
    
        cout<< "El resultado contiene numeros imaginarios: "<<endl;
        cout<<"La raiz 1 es: "<<resultado1<<" + "<<ima1<<"i"<<endl;
        cout<<"La raiz 2 es: "<<resultado2<<" + "<<ima2<<"i"<<endl;
        }
    

    system("pause");
    return 0;
}
    



