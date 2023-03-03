#include<iostream>
using namespace std;
int sum(int x, int y=0, int z=0)
{
    return x+y+z;
}
int main(){
    int a, b, c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    cout<<"Sum of three numbers: "<<sum(a, b, c)<<endl;
    return 0;

}

