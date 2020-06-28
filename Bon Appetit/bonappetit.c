#include<stdio.h>

int main()
 {
     long long int s=0,n,i,k,a[1000000],b;
     scanf("%lld%lld",&n,&k);
     for(i=0;i<n;i++){
     scanf("%lld",&a[i]);
      if(i!=k)
         s=s+a[i];
     }
     scanf("%lld",&b);
     s=s/2;
      if(s==b)
       printf("Bon Appetit");
        else
         printf("%lld",(b-s)); 
 }

