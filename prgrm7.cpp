#include<iostream>
#include<math.h>
using namespace std;
int checkprime(int n)
{
    int i;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;

}
int main()
{
    int i,count=0,check;
    for(i=2;;i++)
    {
        check=checkprime(i);
        if(check==1)
        {
             count+=1;
             if(count==10001)
             {
                cout<<i;
                break;
             }

        }

    }
//cout<<sqrt(25);
}
