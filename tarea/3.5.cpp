#include<iostream>
using namespace std;
int main()
{
    int precio, iva, precioneto, descuento, nuevoprecio;
    cout<<"dame precio";
    cin>>precio;
    iva=precio*.15;
    precioneto=precio+iva;
    if(precioneto>50000)
    {
    descuento=precioneto*.05; cout<<"descuento de"<<descuento<<"$"<<endl;
    nuevoprecio=precioneto-descuento;
    cout<<"precio con descuento"<<nuevoprecio<<endl;
    }
    cout<<"precio neto"<<precioneto<<endl;
    return 0;
}