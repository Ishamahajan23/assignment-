#include<iostream>
using namespace std;
class Circle{
   private:
   int a,b,c,i;
   public:
   void area(int x){
    
        cout<<"Area of circle:"<<3.14*x*x;
   }


};
int main(){

Circle R1;
int a,b;
cout<<"Enter radius of circle:  ";
cin>>a;

R1.area(a);
    return 0;
}
