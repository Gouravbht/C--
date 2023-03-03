#include<iostream>
using namespace std;
int area(int, int);
float area(int);

int main(){
    int r;
    cout<<"enter radius of a circle: ";
    cin>>r;
    float A=area(r);
    cout<<"Area of circle: "<<A<<endl;
    int l, b,a;
    cout<<"Enter length and breadth of a rectangle: ";
    cin>>l>>b;
    a=area(l, b);
    cout<<"Area of rectangle: "<<a<<endl;

}
float area(int R)
{
    return(3.14*R*R);
}
int area(int L,int B)
{
    return(L*B);
}


