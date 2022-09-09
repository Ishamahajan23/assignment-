#include<iostream>
using namespace std;
class ReverseNum
{
     private:
     int a[5],i;
     public:
     void findrevnum(){
         for(i=4;i>=0;i--){
             cout<<" "<<a[i];
         }
     }
     void input(){
     
          cout<<"Enter five numbers :";
          for(i=0;i<5;i++)
          cin>>a[i];
     }
};
int main(){
    
      ReverseNum f1;
      f1.input();
      f1.findrevnum();

    return 0;
}
