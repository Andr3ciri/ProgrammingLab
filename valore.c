#include <stdio.h>
int main()
{
 int x;
 
 printf("inserisci il numero x: ");
 scanf("%d", &x);
 if (x>=0)
 {
     printf("x è un numero positivo\n");
     printf("il valore assoluto di %d è |%d|= %d", x, x, x);
 }
 else
 {
     printf("x è un numero negativo\n");
     printf("il valore assoluto di %d è |%d|= %d\n", x, x, x*-1);
 }
}