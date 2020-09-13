#include<iostream>
using namespace std;
int main()
{
    int first,second;
    //formula for first n natural numbers : n(n+1)/2
    first=(100*(100+1))/2;
    //formula for square of n natural numbers : (n(n+1)(2n+1))/6
    second=(100*(100+1)*((2*100)+1))/6;
    cout<<(first*first)-second;
}
