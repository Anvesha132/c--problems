#include<stdio.h>
int main()
{
    int n,i,cube;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        cube=i*i*i;
        printf("%d\t %d\n",i,cube);
    
    }
    
    return 0;
}