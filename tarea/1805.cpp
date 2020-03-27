#include<iostream>
using namespace std;
int main()
{
    int A, B,R=0;
    cin>>A>>B;
    R=(A+B)+(A-B)+(B+A)+(B-A);
    cout<<R<<endl;
    return 0;
}