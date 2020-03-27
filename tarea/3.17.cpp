#include <iostream>
using namespace std;

int n1=0;//numero 1
int n2=0;//numero 2
int s=0;//suma
int i;
void re (){

cin>>n1;
return;
}

void ciclo (){
for (i=0; i<10; i++){

re();

if (n1 > n2)
{
n2= n1;
s= n2 + s;
}
else{

cout<<"Los numeros no estan ordenados. "<<endl;
return;
}        
}
return;    
}

int main(){

cout<<"Ingrese 10 números enteros"<<endl;

ciclo();

cout<<"La suma de sus números es: "<<s<<endl;

return 0;
}