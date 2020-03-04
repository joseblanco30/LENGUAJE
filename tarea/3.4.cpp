#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
int main()
{
    srand(time(NULL));
    int num, positivo=0;
    for(int i=1;i<=500;i++)
    {
        num=rand();
        cout<<num<<endl;
        if(num>0)
        {
            num=1;
            positivo+=+1;
        }
    }
    cout<<positivo<<" son numeros postivos"<<endl;
    return 0;
}
