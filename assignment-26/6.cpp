#include<iostream>
using namespace std;
class student{
       private:
        int stdid;
        char name[5];
        int age;
 
       public:

       student(int a, char b[],int c){
        int i;
        stdid=a;
        for(i=0;b;i++)
        name[i]=b[i];
        age=c;
       }
        void showdetails(){
           cout<<"Student Id : "<<stdid<<endl;
           cout<<"Name: "<<name<<endl;
           cout<<"Age: "<<age;
        }

};
int main(){
student s1(1,"isha",20);
s1.showdetails();

    return 0;
}

