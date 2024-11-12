#include <stdio.h>
int main()
{
    float n;
    printf("inserire n:\n");
    scanf("%f",&n);
    float y=0;
    for (int i=1; i<=n; i++)
    {
        
        if(i==1)
        {
           y=y+0.5;
        }
        else
        {
            y=(y+1)/2;
        }
    }
    printf("il risultato è %f\n", y);
}