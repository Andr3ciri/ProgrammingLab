#include <stdio.h>
float var(int x[], int n)
{
    float media=0;
    for (int i=0; i<n; i++)
    {
        media+=x[i];
    }
    media/=n;
    float varianza=0;
    for(int i=0;i<n;i++)
    {
        varianza+=(x[i]-media)*(x[i]-media);
    }
    return varianza/=n;
}
int main()
{
    int x[5]={2,3,4,5,6};
    int n=5;
    float vario=var(x, n);
    printf("la varianza è %f\n", vario);

}