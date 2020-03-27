#include <iostream>
using namespace std;
int suma(int a, int b);

int main()
{
int a,b;
int su;
cin>>a>>b;
su=suma(a,b);
cout<<su<<endl;
return 0;
}
int suma(int x, int y)
{
int c;
c=x+y;
return c;
}