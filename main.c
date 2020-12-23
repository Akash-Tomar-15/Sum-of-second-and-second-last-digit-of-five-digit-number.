#include<stdio.h>

void main()
{
    int n,f,r,p,g;
    
    scanf("%d",&n);
    f=n%100;
    g=n%10000;
    
    while(f!=0){
        p=f%10;
        f=f/10;
    }
    
    
     while(g != 0)
    {
        r = g % 100;
        g = g / 10;
    }
    
    printf("%d",r+p);

}