
#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]); 
    }
    int min=a[1];
    int index=1;
    for(int i=1;i<=n;i++){
        
        if(min>a[i]){
            min=a[i];
            index=i;
        }
        //index=i;
     
    }

 printf("%d %d\n",min, index);
 
}