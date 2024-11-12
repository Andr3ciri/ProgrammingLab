#include <stdio.h>
float sommatoria(float n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
       return 1/((2*n+1)*(2*n+1))+sommatoria(n-1); 
    }
}
int main()
{
    float n;
    printf("inserisci la n \n");
    scanf("%f", &n);
    float risultato= sommatoria(n);
    printf("la sommatoria è %f", risultato);
}