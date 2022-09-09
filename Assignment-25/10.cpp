#include<iostream>
using namespace std;
class Area{
   private:
   int a,b,c,i;
   public:
   void Recarea(int x,int y){
    
        cout<<endl<<"Area of Rectangle :"<<x*y;
   }
   void Cirarea(int x){
    cout<<endl<<"Area of circle :"<<3.14*x*x;
   }
   void Sqarea(int x){
    cout<<endl<<"Area of Square:"<<x*x;
   }

};
int main(){

Area A1,A2,A3;
int a,b;
cout<<"Enter Length of rectangle:  ";
cin>>a;
cout<<"Enter width of rectangle: ";
cin>>b;
A1.Recarea(a,b);
cout<<"Enter radius of circle:";
cin>>a;
A2.Cirarea(a);
cout<<"Enter Sides of Square:";
cin>>a;
A3.Sqarea(a);
    return 0;
}
