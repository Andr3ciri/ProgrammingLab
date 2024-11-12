#include <stdio.h>
int main()
{
    float i;
    float n;
    float num;
    float media=0;
    float somma=0;
    float z;
    printf("inserire numero di numeri da calcolare:");
    scanf("%f", &n);

    for(i=1; i<=n; i++)
    {
       
        printf("inserisci numero %f:", i);
        scanf("%f", &num);
        if(num==0)
        {
            i=n;
        }
        else
        {
             somma=somma+num;
             z=i;
        }
    }
    media=somma/z;
    printf("l'attuale media è %f \n", media);
}