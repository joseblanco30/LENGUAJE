#include<iostream>
using namespace std;
int main()
{
     int sumpar=0;
     int mul=1, x;
for(int i=20;i<=4000;i++)
{ 
    if(i%2 ==0)
    {
        
    x=mul*i*-1;
        sumpar=sumpar+i;
    }
}
 cout<<"suma par"<<sumpar<<endl;
cout<<"producto es "<<x<<endl;
    return 0;
}
