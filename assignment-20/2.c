#include<stdio.h>
int swap(char * ,char * );
int main(){
    char a[10],b[10];
   int i;
    printf("Enter one string:");
    scanf("%s",a);
     printf("Enter second string:");
    scanf("%s",b);

    swap(a,b);
    printf("a=%s \n",a);
    printf("b=%s",b);


   return 0;
}
int swap(char *p,char *q){
int t ,i;
for(i=0;i<10;i++){
t=*(p+i);
*(p+i)=*(q+i);
*(q+i)=t;
}
}
