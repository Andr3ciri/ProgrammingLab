#include <stdio.h>
int sommatoria(int n)
{
    int som=0;
    for(int i=1; i<=n; i++)
    {
       som+=i;
    }
    return som;
}
int esatta(int n)
{
  int esat=(n*(n+1))/2;
  return esat;
}
int main()
{   
    int vero=0;
    for(int n=1; n<=100; n++)
    {
        int w=sommatoria(n);
        int z=esatta(n);
        printf("iterativo/esatta %d/%d \n", w, z);
        if(w=z)
        {
            vero+=1;
        }
    }
    if(vero=100)
    {
        printf("sono tutti uguali\n");
    }
    else
    {
        printf("non sono tutti uguali\n");
    }
    
}