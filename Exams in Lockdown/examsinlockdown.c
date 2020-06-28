#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long long int c=0,i,n,a[100000];
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    scanf("%lld",&n);
    for(i=0;i<n;i++){
        scanf("%lld",&a[i]);
        if(a[i] & 1)
            c = c+1;
        }
    printf("%lld",c);
    return 0;
}

