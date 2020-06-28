#include<stdio.h>

int main()
{
int i,j;
long long int a[5],sum[5]={},small=0,big=0;
for(i=0;i<5;i++)
 {
     scanf("%lld",&a[i]);
 }
for(i=0;i<5;i++)
 {
     for(j=0;j<5;j++)
     if(i!=j)
     sum[i] = sum[i] + a[j];
 } 
 small=sum[0];
 big=sum[0];
for(i=0;i<5;i++)
 {
     if(sum[i]<small)
       small = sum[i];
  }
  for(i=0;i<5;i++)
 {
    if(sum[i]>big)
       big = sum[i]; 
 } 
   printf("%lld %lld",small,big);
}

