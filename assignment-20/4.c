#include<stdio.h>
int main(){
int n=23;
int *p;
p=&n;
printf("Handle the pointer\n");
printf("address of n: %d\n",p);
printf("content of n: %d\n",*p);

*p=15;
printf("address of n: %d\n",p);
printf("content of n: %d\n",*p);

n=*p;
printf("address of n: %d\n",p);
printf("content of n: %d\n",*p);



    return 0;
}
