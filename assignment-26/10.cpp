#include<iostream>
using namespace std;
class staticcount{

    private:
    static int a;
    public:
     void count(){
      a++;
    }
     void result(){
        cout<<"Number of count : "<<a;
    }
 

};
int static::a=1;
int main(){

staticcount s1;
int i;
for(i=0;i<3;i++)
s1.count();

s1.result();
    return 0;
}
