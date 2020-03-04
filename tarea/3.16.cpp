#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
int main()
{
    srand(time(NULL));
    int y=0, x=0, z=0, num;
     for(int i=1;i<=100;i++)
     {
         num=rand();
         cout<<num<<endl;
          if(num>15)
          {
          y+=+1;
          }
          if(num>50)
          {
              x+=+1;
          }
          if(num>25)
          {
              if(num<45)
              {
              z+=+1;
              }
          }
     }
cout<<y<< " numeros son mayores a 15"<<endl;
cout<<x<<" numeros son mayores a 50"<<endl;
cout<<z<<" numeros estans entre 25 y 45"<<endl;
return 0;
}
