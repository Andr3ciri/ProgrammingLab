#include <stdio.h>
#include <math.h>
int potenza_2(int y)

{
    if(y==1)
    {
        return 1;
    }
    else if(y%2==0)
    {
    return potenza_2(y/2);
    }
    else return 0;
}
int sommatoria(int y)
{
    if(y==1)
    {
        return 1;
    }
    else
    {
        return (y*potenza_2(y)+sommatoria(y-1));
    }
}
int produttorio(int y)
{
    if(y==0)
    {
        return 0;
    }
    else
    {
        return ((pow(2, y+1))*(1-potenza_2(y)))*produttorio(y-1);
    }
}
int somma(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return sommatoria(n)+produttorio(n)+somma(n-1);
    }
}
int main()
{
    int n=5;
    int risultato=somma(n)-sommatoria(n)-produttorio(n);
    printf("il risultato è %d", risultato);
}