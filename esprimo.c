#include <stdio.h>
int primo(int x, int n)
{
    if (x==1)
    {
        return 1;
    }
    else if(x%n==0)
    {
        return 0;
    }
    else
    {
        return 1*primo(x, n-1);
    }
    
}
int main()
{
    int x=13;
    int n=x-1;
    int risultato=primo(x,n);
    if(risultato==1)
    {
        printf("il numero %d è primo", x);
    }
    else
    {
        printf("il numero %d non è primo", x);
    }
}