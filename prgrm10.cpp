#include<iostream>
#include<math.h>
using namespace std;
int checkprime(long long int n)
{
    long long int i;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    long long int sum=0,i;
    int c;
    for(i=2;i<=2000000;i++)
    {
        c=checkprime(i);
        if(c==1)
        {
            sum+=i;
        }

    }
    cout<<sum;
}
