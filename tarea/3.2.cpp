#include<iostream>
using namespace std;
int main()
{
    int num, mayor;
    for(int i=0;i<=1;i)
    {
        cout<<"di numero";
        cin>>num;
        if(num==0){    
             cout<<"tiene que ser diferente a cero";
             i+=+1;
        }
        if(num<-99){
            cout<<"el ultimo numero de la serie es -99";
            i+=+1;
        }
    
        if(i==0){
            mayor=num;
        }
        else{
        if(num>mayor)mayor=num;
        }
    if (num<0){ cout<<" es numero negativo";}
             
    
    }
    cout<< " el mumero mayor es "<<mayor<<endl;
    return 0;

}
