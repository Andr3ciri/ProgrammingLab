#include <stdio.h>
int main()
{
    int i;
    int max;
    int min;
    int num;
    int n;
    printf("inserire numero di numeri da calcolare:\n");
    scanf("%d", &n);
     for(i=1; i<=n; i++)
    {
        printf("inserisci numero %d:\n", i);
        scanf("%d", &num);
        if(i<=1)
        {
            min=num;
            max=num;
        }
        else
        {
            if(num<min)
            {
                min=num;
            }
            else
            {
                min=min;
            }
        }
        
        if(num>max)
        {
            max=num;
        }
        else
        {
            max=max;
        }
    }
    printf("il numero massimo è %d \n", max);
    printf("il numero minimo è %d \n ", min);
}