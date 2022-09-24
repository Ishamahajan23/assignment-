#include<iostream>
using namespace std;;
class bank{
   private:
   float a,b,c;
   public:
   bank(float x,float y,float z){
       a=x; b=y; c=z;
   }

   void principle(){
    cout<<"principle ammount is: "<<a<<endl;
    cout<<"Rate of the intrest: "<<b<<endl;
    cout<<"Year : "<<c<<endl;
   }
   void cal(){
    cout<<"Calculate simple intrest : "<<a*(1+b*c)-a;
   }


};
int main(){
bank b1(10000.0,0.2,1.0);
b1.principle();
b1.cal();
    return 0;
}
