#include <stdio.h>
int main()
{
    int n=5;
    float null=1;
    float one=3;
    float risultato=0;
    for (int i=0; i<=n; i++)
    {
        if (i==0)
        {
            risultato=null;
        }
        else if(i==1)
        {
            risultato=one;
        }
        else
        {
            risultato=((one+3)/(2*i))+null;
            null=one;
            one=risultato;
        }
    }
    printf("%f", risultato);


}