#include<iostream>
using namespace std;
int main()
{
     int sumpar=0, impar=0;
for(int i=1;i<=200;i++)
{ 
    if(i%2 !=0){
        impar=impar+i;}
    else
    {
        sumpar=sumpar+i;
    }   

}
 cout<<"suma par"<<sumpar<<endl;
cout<<"suma impar es "<<impar<<endl;
    return 0;
}
