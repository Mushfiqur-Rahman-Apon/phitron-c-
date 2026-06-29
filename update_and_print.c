#include<stdio.h>
int main()
{
     int n;
     
    scanf("%d", &n);
    int a[n];
    
    for(int i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);  
    }
     for(int i=n-1;i>=0;i--)
    {
        // a[4] = 10;
        printf("%d ",a[i]); 
        a[1] = a[4];
    }
    return 0;
}