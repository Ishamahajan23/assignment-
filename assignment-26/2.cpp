#include<iostream>
using namespace std;
class time{

private:
int h,m,s;
public:
void settime(int x,int y,int z){
h=x;
m=y;
s=z;
}
void showtime()
{
cout<<" "<<h<<"Hr"<<" "<<m<<"Min"<<" "<<s<<"Sec"<<endl;
}
time add(time C){
time temp;
temp.h=h+C.h;
temp.m=m+C.m;
temp.s=s+C.s;
return temp;
}

};
int main(){
    time c1,c2,c3;
c1.settime(4,23,15);
c2.settime(3,20,25);
c1.showtime();
c2.showtime();
c3=c1.add(c2);
c3.showtime();
    return 0;
}
