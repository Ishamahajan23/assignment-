#include<iostream>
using namespace std;
class complex{

private:
int a,b;
public:
void setdata(int x,int y){
a=x;
b=y;
}
void showdata()
{
cout<<"Real: "<<a<<" imaginary: "<<b<<endl;
}
complex add(complex C){
complex temp;
temp.a=a+C.a;
temp.b=b+C.b;
return temp;
}

};
int main(){
complex c1,c2,c3;
c1.setdata(4,6);
c2.setdata(3,5);
c1.showdata();
c2.showdata();
c3=c1.add(c2);
c3.showdata();
    return 0;
}
