#include<stdio.h>
#include<string.h>
int length(char *);
int main(){

char a[5];
int i,l;
printf("Enter a string:");
fgets(a,5,stdin);
l=length(a);
  printf("Length of string :%d",l);
    return 0;
}
int length(char *p){
int i;
for(i=0;*(p+i);i++);
return i;
}
