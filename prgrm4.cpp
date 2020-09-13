#include<iostream>
using namespace std;
int palindrome(unsigned long long int n)
{
    unsigned long long int a,total=0,rem;
    a=n;
    while(a!=0)
    {
        rem=a%10;
        total=(total*10)+rem;
        a/=10;
    }
    if(total==n)
        return 1;
        else
            return 0;
}
int main()
{
    unsigned long long int i,j,check,great=0,flag=0,temp=0,o=0,t=0;
    for(i=999;i>99;i--)
    {
        for(j=i;j>99;j--)
        {
            if(temp<(i*j))
            {
               check=palindrome(i*j);
            if(check==1)
            {
              great=(i*j);
                //cout<<i<<" "<<j<<"\n";
            }
            if(temp<great)
            {
                temp=great;
                o=i;
                t=j;
            }
            }

        }
    }
    cout<<temp<<"\n"<<o<<" "<<t;
}

