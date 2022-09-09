#include<iostream>
using namespace std;
class LargeNum
{
     private:
     int a,b,c;
     public:
     void findlargenum(int x,int y,int z){
         if(x>y && x>z)
         cout<<endl<<"largeNum: "<<x;
         if(y>x &&y>z)
         cout<<endl<<"largeNum: "<<y;
         if(z>x && z>y)
         cout<<endl<<"largeNum: "<<z;
      
     }
};
int main(){

      LargeNum f1,f2;
      f1.findlargenum(8,10,67);
      f2.findlargenum(6,56,3);

    return 0;
}
