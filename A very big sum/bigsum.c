#include<stdio.h>

int main()
 {
    int i,n;
    long long int c,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
     {
       scanf("%lld",&c);
       sum = sum + c;
     }
     printf("%lld",sum);
 }

