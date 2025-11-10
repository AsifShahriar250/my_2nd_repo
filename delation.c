#include<stdio.h>
int a[1000];
int main(){
    
    int n;
    scanf("%d",&n);
    //int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int index;
    scanf("%d",&index);

    
    for(int i=index;i<n-1;i++){
        a[i]=a[i+1];
    }
    n--;
    for(int i=0;i<n-1;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}K