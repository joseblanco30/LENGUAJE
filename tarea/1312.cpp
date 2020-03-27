#include <iostream>
using namespace std;

int calcula(int r1, int s);

int main(){
int r1, r2, s;
int sp;
cin>>r1>>s;
sp=calcula(r1,s);
cout<<sp<<endl;
return 0;
}

int calcula(int r3, int ss){
int y;
ss=ss*2;
y=ss-r3;
return y;
}