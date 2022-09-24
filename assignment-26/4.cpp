#include<iostream>
using namespace std;
class counter{
    private:
    int count;
    public:
    counter(){
        count=0;
    }
    void incount(){

     count++;
    }
    int getcount(){
        return count;
    }
};
int main(){
counter c1;
c1.incount();
cout<<"calling funtion ";
cout<<c1.getcount();

    return 0;
}
