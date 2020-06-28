#include<stdio.h>

int main()
 {
     long long int a[100000],n,i,t,temp,swap=0;
     scanf("%lld",&n);
     for(i=0;i<n;i++)
      scanf("%lld",&a[i]);

        for(int i=0;i<n;i++){
            if(i+1!=a[i]){
                t=i;
                while(a[t]!=i+1){
                    t++;  
                }
                temp=a[t];
                a[t]=a[i];
                a[i]=temp;
                swap++;
            }
      }
      printf("%lld",swap);
 } 

