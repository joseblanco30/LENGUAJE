#include<iostream>
#include<iomanip>

using namespace std;


int main()
{
    float str;
    cin>>str;
    float total =0;
    while(cin)
    {
        if(str<0)
        {
        }
        else 
        total += str;
        cin>>str;
    }
    cout<<"total: "<<total<<endl;
    return 0;
}
