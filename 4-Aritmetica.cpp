#include <iostream>

using namespace std;

int main(){
    int n1, n2, suma = 0, resta = 0, multiplicacion = 0, division = 0;

    cout<<"Digite un numero: "; cin>>n1;
    cout<<"Digite otro numero: "; cin >> n2;

    suma = n1+n2;
    resta = n1-n2;
    multiplicacion = n1* n2;
    division = n1/n2;

    cout<<"\n La suma es: "<<suma<<endl;
    cout<<"La resta es:"<< resta <<endl;
    cout<<"La multiplicacion es: "<<multiplicacion<<endl;
    cout<<"La division es: "<<division<<endl;
    
    cout<<"Ahora hagamos un calculo del producto+IVA";
    cout<<"\nIngrese el valor del producto: "; cin>>n1;
    n1 = (n1*0.15) +n1;
    cout<<"El precio del producto mas IVA es: "<<n1<<endl;

    return 0;
}