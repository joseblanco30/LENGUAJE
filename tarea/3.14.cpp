#include<iostream>
using namespace std;
int main ()
{
    int c, num, sum =0, b; 
    int i=0;
    for(i=1;i<=10;i)
    {
        cout<<"di numero";
        cin>>num;
        if(num%2 ==0)
        {
            sum=sum+num;
            i+=+1;
        }
    }
cout<<"suma de los primeros 10 pares"<<sum<<endl;
    return 0;
}