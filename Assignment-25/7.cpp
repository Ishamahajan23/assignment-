#include<iostream>
using namespace std;
class Greatest{
   private:
   int a,b,c,i;
   public:
   void large(int x,int y,int z){
    
        if(x>y && x>z)
        cout<<"largest num : "<<x;
        if(y>x && y>z)
        cout<<"largest num : "<<y;
        if(z>x && z>y)
        cout<<"largest num : "<<z;
    
   }


};
int main(){

Greatest G1;
int a,b,c;
 cout<<"Enter three numbers:  ";
    cin>>a;
    cin>>b;
    cin>>c;

G1.large(a,b,c);
    return 0;
}
