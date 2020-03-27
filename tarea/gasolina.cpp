#include <iostream>
#include<cstdlib>
#include<string>
using namespace std;

int obtenerValor(int lim_inf,int lim_sup)
{
    srand(time(NULL));
    int tmp= lim_inf + rand()%(lim_sup+1 -lim_inf);
    return tmp;
}
int totallitro(int lim_inf,int lim_sup)
{
    int sum =0;
    for(int i=0; i<20000;i++);
    {
        int tmp= lim_inf + rand()%(lim_sup+1 -lim_inf);
        if(tmp>100)
        sum += 12;
        else 
        sum += 10;
    }
    return sum;


}
int main (int argc, char*argv[])
{
    int lim_inf=50 ,lim_sup=150 ;
    int sum =0;
    srand(time(NULL));
      if(argc !=3)
    {
        cout<<"error, el programa "<<argv[0]<<"debe porpotcionar dos parametros"<<argv[0]<<"lim_sup_inf_inf"<<endl;
        return 1;
    }

    lim_inf=stoi(argv[1],nullptr,10);
    lim_sup=stoi(argv[1],nullptr,10);
    sum=totallitro(lim_sup,lim_inf);
    cout <<"El costo de combustible es:" <<(sum*19)<<endl;
    return 0;
    

}