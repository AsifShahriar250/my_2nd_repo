#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int index,value;
    scanf("%d %d",&index,&value);
    a[index]=value;
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }

}