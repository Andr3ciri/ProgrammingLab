#include <stdio.h>
int main()
{
    int i;
    int somma=0;
for (i=1; i<=5; i++)
{
    int n;
    printf("inserisci un numero (%d/5):\n", i);
    scanf("%d", &n);  
    somma=somma+n; //somma+=n;
    printf("la somma vale %d \n", somma);
}
printf("la somma è : %d \n", somma);
}