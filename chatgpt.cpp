#include<stdio.h>
int main()
{
    int n;
    printf("enter the number os series");
    scanf("%d", &n);
    int a = 0, b = 1, c;
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a);  // Fixed: added space
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}

