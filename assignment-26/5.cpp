#include<iostream>
using namespace std;
class date{
private:
int d;
public:
date(int x){
    d=x;
}
void disdate(){

cout<<"DATE "<<d;
}

};
int main(){
date d1=23;
d1.disdate();

    return 0;
}
