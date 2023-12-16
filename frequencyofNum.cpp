#include <iostream>
using namespace std;
int frequency(int num, int k){
    int c=0;
    while(num>0){
        if(num%10==k){
            c++;

        }
        num=num/10;
    }
    return c;
}
int main(){
    int num, k;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<"Enter the number of which the frequency you want to know: ";
    cin>>k;
    cout<<"The frequency of "<<k<<" is "<<frequency(num,k)<<" times. ";
    return 0;

}