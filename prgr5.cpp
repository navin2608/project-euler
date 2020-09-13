#include<iostream>
using namespace std;
int checkmultiply(int n)
{
    int i;
    for(i=1;i<=20;i++)
    {
        if(n%i!=0)
            return 0;

    }
    return 1;

}
int main()
{
    int check;
    for(int i=1;;i++)
    {
        check=checkmultiply(i);
        if(check==1)
        {
            cout<<i;
            break;
        }
    }

}
