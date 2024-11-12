#include <stdio.h>
float calcola(float n, float p)
{
    if (n==1.0)
    {
        return p;
    }
    else
    {
        return ((calcola(n-1, p))+(p/calcola(n-1, p)))/2.0;
    }
}
int main()
{
    float n;
    printf("inserisci n \n");
    scanf("%f", &n);
    float p;
    printf("inserisci la p \n");
    scanf("%f", &p);
    float risultato= calcola(n, p);
    printf("il risultato è %f\n", risultato);
}