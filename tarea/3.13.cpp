#include<iostream>
using namespace std;
int main()
{
    int suma=0, cal, media, a;
    cout<<"cuantos alumnos hay";
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        cout<<"calificacion del alumno "<<i<<endl;
        cin>>cal;
        suma=suma+cal;
    }
    media=suma/a;
    cout<<"promedio del salon con "<<a<<" alumnos es de "<<media<<endl;
    return 0;
}