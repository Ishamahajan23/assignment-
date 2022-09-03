#include<stdio.h>
void sort(int*,int );
int main(){
int a[5];
int i;
printf("Enter numbers:\n");
for(i=0;i<5;i++)
scanf("%d",&a[i]);
sort(a,5);

    return 0;
}
void sort(int *p,int size){
    int i,j,k=0;
    
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++)
        if(*(p+j)<*(p+i))
        {
            k=*(p+i);
            *(p+i)=*(p+j);
            *(p+j)=k;

        }

    }
    printf("sorted array:");
    for(i=0;i<size;i++){

        printf("%d ",*(p+i));
    }
    
}
