#include<iostream>
using namespace std;
class box{

    private:
    int height,width,length;
    public:
    box(int h,int w,int l){
         height=h;
         width=w;
         length=l;
    }
    void volume(){

     cout<<"Volume of Box: "<<height*width*length;

    }
};
int main(){

box b1(2,4,6);
b1.volume();

    return 0;
}
