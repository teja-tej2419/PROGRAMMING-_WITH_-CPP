#include<stdio.h>
int main()
{
    int n;
    int i;
    scanf("%d",&n);
    int a=0,b=1,c;
    for(i=0; i<n; i++)
    {
        printf("%d ",a);
        c=a+b;
		a=b;
		b=c;
    }
    return 0;
}









