#include <iostream>
using namespace std;

class student{
      public:
      int rollnum;
      int phonenum;

      student(int rn, int pn){
            rollnum = rn;
            phonenum = pn;
      }
};

int main(){
    student obj(215,77);
    cout<<obj.rollnum<<" "<<obj.phonenum;
}