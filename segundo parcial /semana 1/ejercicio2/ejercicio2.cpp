//semana1 ejercicio2 
//Jose jesus Coyoc Blanco
#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int con=0;
int n,x,i,k,j,l;
int e[10000];

void datoentrada();
void suma();

int main()
{
	datoentrada();
	while(n>=1 && n<=1000 && x,e[10000]>=1 && x,e[10000]<=10000000 && con ==0 ){
	
	int n=sizeof(e) / sizeof(e[0]);
	suma();
	if(con==0)
	{
		cout<<"\n imposible";
	}
}
	if(n<1 && n>1000){
		cout<<"\n el numero de elmentos del arreglos tiene que estar entre 1 y 10000 ";
	}
	if(x,e[10000]<1 && x,e[10000]>10000000){
		cout<<"la suma tiene que y los elementos del arrelgo van desde 1 hasta 1000000000";
	}
	return 0;
}

void datoentrada(){
	cout<<"\n Escribir el numero de elementos en el arreglo y el total de suma requerida: ";
	cin>>n>>x;
	cout<<"\n Escribit los elementos del arreglo: ";
	for(i=1;i<=n;i++)
	{
		cin>>e[i];

}
}
void suma(){ 
for (int i = 0; i <n - 3; i++) 
{ 
    for (int j = i + 1; j <=n - 2; j++) 
    {           
        for (int k = j + 1; k <=n - 1; k++) 
        {
            for (int l = k + 1; l < n; l++) 
        
            if (e[i] + e[j] + e[k] + e[l] == x)
            if(con ==0 ){
                cout << i+1<<", " << j+1  
                     << ", " << k+1 << ", " << l+1<<endl;
                     con+=+1;
					 }
		}
	}  
} 
}


