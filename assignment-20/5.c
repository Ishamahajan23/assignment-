#include<stdio.h>
int main(){
int a,b;
int *p=&a;
int *q=&b;
printf("Enter two numbers:");
scanf("%d %d",&a,&b);
if(*p>*q)
printf("\nMaximum numbers is:%d",*p);
else
printf("\nMaximum numbers is:%d",*q);
    return 0;
}
