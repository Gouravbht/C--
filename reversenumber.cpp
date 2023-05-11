//write a program to reverse a number
#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int rev = 0;
    while(num>0){
        int lastdigit = num%10;
        rev = rev*10 + lastdigit;
        num = num/10;
    }
    cout<<"The reverse of the number is: "<<rev;
    return 0;
}
