#include <stdlib.h>
#include <stdio.h>
 
int main(){
    int num;
    scanf("%d", &num);
    while(num--)
    {
        int n,m,i,u,d,l,r;
        scanf("%d %d",&n,&m);
        char a[1005];
        scanf("%s",a);
        u=0,l=0,r=0, d=0;
        for(i=0; a[i]!='\0';i++)
        {    
            
            if(a[i]=='L')
                    {l++;
 
                    if(r>0)
                    r--;
                    if(l==m)
                    break;
                    }
                    
 
            else if(a[i]=='R')
            {
                ++r;
                 if(l>0)
                    l--;
                    if(r==m)
                    break;
            
            }
            else if(a[i]=='U')
            {
                 ++u;
                if(d>0)
                    d--;
                    if(u==n)
                    break;
            }
 
            else if(a[i]=='D')
            {
                ++d;
                if(u>0)
                    u--;
                    if(d==n)
                    break;}
 
            
        }
            
        if(abs(l)<m && abs(r)<m && abs(u)<n && abs(d)<n)
        printf("safe\n");
        else
        printf("unsafe\n");
        }
 
    }                          
    
