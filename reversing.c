#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
   
    // for (int i = 0; i < n/2; i++)
    // {
    //     int temp;
    //     temp = a[i];
    //     a[i] = a[n-i-1];
    // //     a[n-i-1] = temp;
    // // }
    //  {
    //     int temp;
    //     temp = a[i];
    //     a[i] = a[j];
    //     a[j] = temp;
    // }
     

     for(int i=0;i<n;i++){
      printf("%d ",a[i]);

    }
    


    //  for(int i=n-1;i >= 0;i--){
    //     printf("%d ",a[i]);
    // }
    // printf("\n");


}