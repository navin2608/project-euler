#include<iostream>
#include<math.h>
using namespace std;
int primeno(unsigned long long int n)
{
    unsigned long long int i;
    int flag=1;
    for(i=2;i<=(int)sqrt(n);i++)
    {
        if(n%i==0)
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
        return 1;
}
int main()
{
    unsigned long long int n=600851475143,i=2,prime=0;
    int great=0;
    while(i<=(int)sqrt(n))
    {
        if(n%i==0)
        {
            great=primeno(i);
            if(great==1)
                prime=i;
        }
        i++;
    }
    cout<<prime;
    //cout<<"\n"<<(int)sqrt(n);
}
