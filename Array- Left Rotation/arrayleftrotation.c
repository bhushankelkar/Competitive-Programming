// C program to rotate an array by 
// d elements 
#include <stdio.h> 
/*Function to left rotate arr[] of siz n by d*/
void leftRotate(long long int [],long long int,long long int);
void printArray(long long int [],long long int);
long long int gcd(long long int,long long int);

int main() 
{ 
    long long int i,arr[100000],n,d;
    scanf("%lld",&n);
    scanf("%lld",&d);
    for(i=0;i<n;i++)
     scanf("%lld",&arr[i]);
    leftRotate(arr, d, n); 
    printArray(arr, n); 
    getchar(); 
    return 0; 
} 

void leftRotate(long long int arr[],long long int d,long long int n) 
{ 
    int i, j, k, temp; 
    /* To handle if d >= n */
    d = d % n; 
    long long int g_c_d = gcd(d, n); 
    for (i = 0; i < g_c_d; i++) { 
        /* move i-th values of blocks */
        temp = arr[i]; 
        j = i; 
        while (1) { 
            k = j + d; 
            if (k >= n) 
                k = k - n; 
            if (k == i) 
                break; 
            arr[j] = arr[k]; 
            j = k; 
        } 
        arr[j] = temp; 
    } 
} 
  
/*UTILITY FUNCTIONS*/
/* function to print an array */
void printArray(long long int arr[], long long int n) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
        printf("%lld ", arr[i]); 
} 
  
/*Fuction to get gcd of a and b*/
long long int gcd(long long int a,long long int b) 
{ 
    if (b == 0) 
        return a; 
    else
        return gcd(b, a % b); 
} 
  
