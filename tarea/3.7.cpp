#include<iostream>
using namespace std;
int main ()
{
    int sumapar=0;
    for(int i=2;i<=100;i++)
    {
        if(i%2 ==0) sumapar=sumapar+i;
    }
    cout<<"suma par es "<<sumapar<<endl;
    return 0;
}