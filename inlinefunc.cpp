#include<iostream>
using namespace std;

inline int square(int x)   //defining inline function
{
    return(x*x);
}

int main()
{
    int x;
    cout<<"Enter the number: ";
    cin>>x;
    cout<<"square of "<<x<<" is "<<square(x)<<endl;
    return 0;

}