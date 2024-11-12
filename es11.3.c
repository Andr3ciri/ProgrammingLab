#include <stdio.h>
#include <math.h>

int sommatoria(int n, int x)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return pow(x, n)+sommatoria(n-1, x);
    }
}
int main()
{
    int n;
    printf("inserire n \n");
    scanf("%d", &n);
    int x;
    printf("inserire la x \n");
    scanf("%d", &x);
    int risultato= sommatoria(n, x);
    printf("la sommatoria è %d \n", risultato);
}