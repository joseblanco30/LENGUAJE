//semana1 problema1
// Jose Jesus Coyoc
#include<iostream>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};
void EnteroEntrada();  // datos de entrada
void PareInpar(int n); // clasificacion de pares e inpares
int dato;
int main(){	
	EnteroEntrada();
	while(dato<10000000 && dato>1){
	PareInpar(dato);
}
if(dato>10000000){
cout<<"El numero tiene que ser mayor 1 pero menor menor a 1000000"<<endl;
}
if(dato<1){
cout<<"El numero tiene que ser mayor 1 pero menor menor a 1000000"<<endl;	
}
	return 0;
}
void EnteroEntrada(){
	cout<<"Ingrese el numero entero: ";
	cin>>dato;

}
void PareInpar(int n){
	while(dato > 1){
	 	cout<<dato<<" ";
	 	if (dato%2==0)
	 	{
	 		dato=dato/2;
		 }
		 else 
	 	{
	 		dato=(dato*3+1);
		 }
	 }
	 cout<<" "<<dato;

}

