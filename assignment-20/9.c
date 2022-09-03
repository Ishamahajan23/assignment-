#include<stdio.h>
void reverse(int*,int );
int main(){
int a[5];
int i;
printf("Enter numbers:\n");
for(i=0;i<5;i++)
scanf("%d",&a[i]);
reverse(a,5);

    return 0;
}
void reverse(int *p,int size){
    int i,j,k=0;
    printf("\nreverse array:");
    for(i=size;i>=0;i--){
      printf("%d ",*(p+i));
    }
    
    
}
