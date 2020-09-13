
#include<iostream>
using namespace std;
int main()
{
    int a=1,b=1,c=0,count=0,sum=0;
    c=a+b;
    while(c<4000000)
    {
        sum+=c;
        a=b+c;
        b=c+a;
        c=a+b;

    }
    cout<<sum;
}
