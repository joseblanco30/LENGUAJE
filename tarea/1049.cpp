#include <iostream>
using namespace std;

int main()
{
int y=0, x;
cout<<"insertar n";
cin>>x;
for(int i=1;i<=x;i++)
{
y+=i;
}
cout<<"suma es de "<<y<<endl;
return y;
}