#include<iostream>
#include<iomanip>

using namespace std;

float numero(char*valor)
{
    char tmp [10];
    for(int i=0;(i<sizeof(valor)||i<10);i++)
    tmp[i]=valor[i+1];
    return stof (tmp);
}
int main()
{
    char str[10];
    cin>>str;
    float total =0;
    float f=0;
    while(cin)
    {
        f=numero(str);
        if(str[0]=='<')
        {
            total -= f;
        }
        else
        {
            total +=f;
        }
        
        cin>>str;
    }
    cout<<"total: "<<total<<endl;
    return 0;
}