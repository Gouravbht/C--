//write a program to find the alternate prime number between 1 to nth

#include<iostream>
using namespace std;

int main()
{
    int n,i,j,flag=0;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Alternate prime numbers between 1 to "<<n<<" are: ";
    for(i=2;i<=n;i++)
    {
        flag=0;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
            
        }
        if(flag==0)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}