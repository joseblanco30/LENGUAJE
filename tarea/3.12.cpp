#include<iostream>
using namespace std;
int main()
{
    int num, sum =0, impar =0, a=0, media, n=0;
    for(int i=1;i<=10;i++)
    {

        cout<<"di numero";
        cin>>num;
        if(num%2 ==0)
        {
            sum=sum+num;
            n=n+1;
        }
        else
        {
            impar=impar+num;
            a=a+1;
            media=impar/a;
        }
        
    }
    cout<<"la suma par es "<<sum<<endl;
    cout<<"existen "<<n<<" numeros pares"<<endl;
    cout<<"la media de los impares es "<<media<<endl;
    return 0;
}