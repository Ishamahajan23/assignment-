#include<stdio.h>
void sum(int*,int );
int main(){
int a[5];
int i;
printf("Enter numbers:\n");
for(i=0;i<5;i++)
scanf("%d",&a[i]);
sum(a,5);

    return 0;
}
void sum(int *p,int size){
    int i,j,k=0;
    for(i=0;i<size;i++)
        k=k+*(p+i);
        
    printf("\nsum of all the elements of arrays:%d",k);
    
}
