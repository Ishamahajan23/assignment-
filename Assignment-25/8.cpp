#include<iostream>
using namespace std;
class Rectangle{
   private:
   int a,b,c,i;
   public:
   void area(int x,int y){
    
        cout<<"Area of Rectangle :"<<x*y;
   }


};
int main(){

Rectangle R1;
int a,b;
cout<<"Enter Length of rectangle:  ";
cin>>a;
cout<<"Enter width of rectangle: ";
cin>>b;

R1.area(a,b);
    return 0;
}
