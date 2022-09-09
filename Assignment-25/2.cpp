#include<iostream>
using namespace std;
class time 
{
     private:
     int a,b,c;
     public:
     void settime(int x,int y,int z){
          a=x;
          b=y;
          c=z;

     }
     void showtime(){
        cout<<endl<<" "<<a<<" hr"<<" "<<b<<" min"<<" "<<c<<" sec";
     }
};
int main(){

     time t1,t2;
     t1.settime(3,45,20);
     t2.settime(5,30,15);
     t1.showtime();
     t2.showtime();

    return 0;
}
