//semana 1 problema 3
//Jose Jesus Coyoc Blanco
#include<iostream>
#include<stdlib.h>
using namespace std;
void dentranda();
void distribucion();
int n,m,k,i,r;
int a[1000];
int b[1000];
int sum=0;
int main (){
    dentranda();
    distribucion();
    cout<<"Las personas aceptados son: "<<sum;
    return 0;
}
void dentranda(){
    cout<<"\n Proporcionar el numero de solicitantes, el numero de apartamentos y la diferencia maxima permitida: ";
    cin>>n>>m>>k;
    cout<<"\n Proportcionar el tama�o de apartamentos deseado: ";
	for( i=0;i<n;i++){
        cin>>a[i];
        
    
    }
    cout<<"\n Tamaño de cada aprtamiento disponible: ";
    for( r=0;r<m;r++){
        cin>>b[r];
	}    
}
void distribucion(){
	for(i=0;i<n;i++){
    	for(r=0;r<m;r++){
    		if(sum<m){
			if((abs(a[i]-b[r]))<=k){
			sum+=1;
  			a[i]=a[i+1];
			b[r]=b[r+1];
		}
			}
		}
}
}
