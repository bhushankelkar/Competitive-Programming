#include<stdio.h>

int main()
 {
     int i,n,a[100];
     float p=0,z=0,ne=0;
     scanf("%d",&n);
     for (i=0;i<n;i++)
      {
          scanf("%d",&a[i]);
          if(a[i]<0)
           ne++;
           else if(a[i]>0)
            p++;
             else
               z++;
      }
      printf("%f",p/n);
      printf("\n%f",ne/n);
      printf("\n%f",z/n);
 }

