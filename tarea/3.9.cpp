#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
int main()
{
    srand(time(NULL));
    int num, sum=0, media;
    for(int i=1;i<=50;i++)
    {
        num=rand();
        cout<<num<<endl;
        sum=sum+num;
    }
     media=sum/50;
    cout<<"media es "<<media<<endl;
    return 0;
}
