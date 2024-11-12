#include <stdio.h>
int power(int k, int n)
{
    int pot=1;
    for(int i=n; i>=1; i--)
    {
            pot=k*pot;
    } 
    return pot;
}

int main()
{
    int n;
    int k;
    int somma=0;
    printf("inserire n:\n");
    scanf("%d", &n);
    printf("inserire la k:\n");
    scanf("%d", &k);
    for(int i=1; i<=n; i++)
    {
        somma=somma+power(k, i);
    }
    
    printf("la sommatoria è %d\n", somma);   
        
}