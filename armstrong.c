#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,u,sum=0;
    printf("enter a number:");
    scanf("%d",&n);
    m=n;
    u=(int)log10(n)+1;
    while(m)
    {
        int p=m%10;
        sum+=pow(p,u);
        m=m/10;
    }
    if(sum==n)
    printf("%d is a armstrong number",n);
    else 
    printf("%d is not a armstrong number",n);
}