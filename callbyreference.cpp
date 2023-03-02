//when formal arguments are reference variables , 
//it is function call by reference

#include<iostream>
using namespace std;
int sum(int&, int&);
int main()
{
    int a=9, b=19;
    int s=sum(a, b);
    cout<<"sum is "<<s;
}
int sum(int &p, int &q)
{
    return(p + q);
}

