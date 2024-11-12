#include <stdio.h>
void raddoppia(int *x)
{
    *x*=2;
    printf("%d\n", *x);

}
int main()
{
    int x=5;
    raddoppia(&x);
    return 0;
}