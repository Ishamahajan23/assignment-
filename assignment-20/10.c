#include<stdio.h>
#include<string.h>
int main(){
char *p;
int l,i;
printf("Enter a string:");
gets(p);
l=strlen(p);
for(i=l;i>=0;i--)
printf("%c",*(p+i));

    return 0;
}
