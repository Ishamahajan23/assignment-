#include<iostream>
using namespace std;
class cube{
    private:
    int a,b;
    public:
    cube(int x){
        a=x;
        b=0;
    }
    void volume(int x){
    cout<<"Volume of the cube: "<<x*x*x<<endl;
    }
};
int main(){
cube c1(9);
int n;
cout<<"Enter a Cube side: ";
cin>>n;
c1.volume(n);
    return 0;
}
