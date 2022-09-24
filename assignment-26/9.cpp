#include<iostream>
using namespace std;
class bill{


         private:
         int a;
         float b;
         public:
         bill(int x,float y){
             a=x; b=y;
         }
         
         void get(){

            cout<<" Total Price: "<<endl;
         }
         void calculatebill(){
            cout<<" "<<" unit RS. "<<" Per unit";
         }

};
int main(){

bill b1(100,1.2),b2(200,2);
b1.calculatebill(b2);
    return 0;
}
