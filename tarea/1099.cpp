#include<iostream>
using namespace std;
int main()
{
    int A, B, C, AB=0;
    cin>>A>>B>>C;
    AB=(A*A)+(B*B);
    if(AB==(C*C))
    cout<<"right"<<endl;
    else
    {
        cout<<"wrong"<<endl;
    }
    return 0;

}