#include<stdio.h>
int countv(char *);
int countc(char *);
int main(){
      char n[100];
      int l,m;
      printf("Enter a string :");
      fgets(n,100,stdin);
      l=countv(n);
     printf("vowels: %d\n",l);
     m=countc(n);
     printf("consonents: %d",m);


    return 0;
}
int countv(char *p){
int i,j,v=0;
for(i=0;*(p+i);i++){

       if(*(p+i)=='a'|| *(p+i)=='e'|| *(p+i)=='i'|| *(p+i)=='o'|| *(p+i)=='u')
       v++;

}
return v;
}
int countc(char *p){
int i,j,c=0;
for(i=0;*(p+i);i++){

       if(*(p+i)=='b'||*(p+i)=='c'|| *(p+i)=='d'|| *(p+i)=='f'||*(p+i)=='g'||*(p+i)=='h'||*(p+i)=='j'||*(p+i)=='k'||*(p+i)=='l' ||*(p+i)=='m'||*(p+i)=='n' ||*(p+i)=='p'||*(p+i)=='q'||*(p+i)=='r'||*(p+i)=='s'||*(p+i)=='t'||*(p+i)=='u'||*(p+i)=='v'||*(p+i)=='w'||*(p+i)=='x'||*(p+i)=='y'||*(p+i)=='z')
       c++;

}
return c;
}
