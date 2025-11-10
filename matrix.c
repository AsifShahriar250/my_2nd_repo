#include <stdio.h>
#include<stdlib.h>
int main()
{

    int n;
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int element = a[0][0];
    int sum1 = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i==j){
                sum1+=a[i][j];
            }

        }
    }
    
    int sum2=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int x=i+j; 
            if (x == n-1)
            {
                sum2=sum2+a[i][j];
                //printf("%d\n",sum);
            }
        }
    }
   
    int y=abs(sum1-sum2);
    printf("%d\n",y);
}//4
// 1 5 12 1
// 2 -4 6 7
// 3 8 5 9
// 3 5 23 -6
