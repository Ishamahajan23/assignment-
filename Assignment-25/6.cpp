#include<iostream>
using namespace std;
class sqare{

      private:
      int n;
      public:
      void sqarenum(int x){
          cout<<" "<<x*x;
      }

};
int main(){
    sqare s1;
    int n;
    cout<<"enter a number to square:";
    cin>>n;
    s1.sqarenum(n);
    
    return 0;
}
