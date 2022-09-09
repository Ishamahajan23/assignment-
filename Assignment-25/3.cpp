#include<iostream>
using namespace std;
class factorial
{
     private:
     int a;
     public:
     void findfactor(int x){
         int i,f=1;
         for(i=x;i>0;i--)
            f=f*i;

      cout<<endl<<"factorial is "<<f;
     }
};
int main(){

    factorial f1,f2;
      f1.findfactor(8);
      f2.findfactor(6);

    return 0;
}
