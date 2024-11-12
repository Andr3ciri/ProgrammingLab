#include <stdio.h>
float esame(float n)
{
    if(n<=0)
    {
        return 1;
    }
    else if(n==1)
    {
        return 3;
    }
    else
    {
        return ((esame(n-1)+3)/(2*n))+esame(n-2);
    }
}
int main()
{
    float n;
    printf("inserisci n: \n");
    scanf("%f", &n);
    float risultato=esame(n);
    printf("il risultato è %f", risultato);
}